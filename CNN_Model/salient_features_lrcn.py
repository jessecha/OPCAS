from keras.layers import Input, Dense, merge
from keras.layers.convolutional import Conv2DTranspose
from keras.models import Model
from keras.models import Sequential
from keras.layers import Convolution2D, MaxPooling2D, Reshape, BatchNormalization, Lambda, Deconvolution2D
from keras.layers import Activation, Dropout, Flatten, Dense
from keras.layers.advanced_activations import ELU
from keras import regularizers
from keras import optimizers
from keras import backend as K
from keras.layers.recurrent import LSTM
from keras.layers.wrappers import TimeDistributed
from keras.backend.tensorflow_backend import set_session
import tensorflow as tf
import numpy as np
import cv2
import os
from matplotlib import pyplot as plt
from matplotlib import animation
from IPython.display import display, HTML
from glob import iglob
from model.models import build_lrcn
import matplotlib.animation as animation
config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))

###Documentation###
#1. Set number of stacked images in n_stacked
#2. Set image width & height
#3. Set correct deconv input shapes
#4. Set correct name for NN model
#5. Set correct upscaled activation numbers

global n_stacked
n_stacked = 3

model = build_lrcn(w=157, h=157, d=3, s=3)
model.load_weights('lrcn.hdf5')

img_in = Input(shape=(3, 157, 157, 3), name='img_in')
h = 157
w = 157
d = 3
s = 3
x = img_in
x = TimeDistributed(Convolution2D(24, (5,5), strides=(2,2), activation='elu', input_shape=(h, w, d)), name='conv1')(x)
x = TimeDistributed(Convolution2D(32, (5,5), strides=(2,2), activation='elu', input_shape=(h, w, d)), name='conv2')(x)
x = TimeDistributed(Convolution2D(64, (5,5), strides=(2,2), activation='elu', input_shape=(h, w, d)), name='conv3')(x)
x = TimeDistributed(Convolution2D(64, (3,3), strides=(1,1), activation='elu', input_shape=(h, w, d)), name='conv4')(x)
conv_5 = TimeDistributed(Convolution2D(64, (3,3), strides=(1,1), activation='elu', input_shape=(h, w, d)), name='conv5')(x)
convolution_part = Model(inputs=[img_in], outputs=[conv_5])
for layer_num in ('1', '2', '3', '4', '5'):
    convolution_part.get_layer('conv' + layer_num).set_weights(model.get_layer('conv' + layer_num).get_weights())

inp = convolution_part.input                                           # input placeholder
outputs = [layer.output for layer in convolution_part.layers]          # all layer outputs
functor = K.function([inp], outputs)

kernel_3x3 = tf.constant(np.array([
        [[[1]], [[1]], [[1]]], 
        [[[1]], [[1]], [[1]]], 
        [[[1]], [[1]], [[1]]]
]), tf.float32)

kernel_5x5 = tf.constant(np.array([
        [[[1]], [[1]], [[1]], [[1]], [[1]]], 
        [[[1]], [[1]], [[1]], [[1]], [[1]]], 
        [[[1]], [[1]], [[1]], [[1]], [[1]]],
        [[[1]], [[1]], [[1]], [[1]], [[1]]],
        [[[1]], [[1]], [[1]], [[1]], [[1]]]
]), tf.float32)

layers_kernels = {5: kernel_3x3, 4: kernel_3x3, 3: kernel_5x5, 2: kernel_5x5, 1: kernel_5x5}

layers_strides = {5: [1, 1, 1, 1], 4: [1, 1, 1, 1], 3: [1, 2, 2, 1], 2: [1, 2, 2, 1], 1: [1, 2, 2, 1]}


def compute_visualisation_mask(img):
    activations = functor([np.array([img])])	
    upscaled_activation = np.ones((3,13,13)) 
    for layer in [5, 4, 3, 2, 1]:
	the_layers = np.mean(activations[layer], axis=4).squeeze(axis=0)
        averaged_activation = the_layers * upscaled_activation

	output_shape = (activations[layer - 1].shape[1], activations[layer - 1].shape[2], activations[layer - 1].shape[3])
        x = np.reshape(averaged_activation, (1, averaged_activation.shape[0], averaged_activation.shape[1],averaged_activation.shape[2], 1))
        modeltwo = Sequential()
	if layer == 5:
		modeltwo.add(TimeDistributed(Deconvolution2D(1,(3,3),strides=(1,1),
		    output_shape=(1, output_shape[0],output_shape[1], 1), 
		    padding='VALID'), input_shape=(3,13,13,1)))
	if layer == 4:
		modeltwo.add(TimeDistributed(Deconvolution2D(1,(3,3),strides=(1,1),
		    output_shape=(1, output_shape[0],output_shape[1], 1), 
		    padding='VALID'), input_shape=(3,15,15,1)))
	if layer == 3:
		modeltwo.add(TimeDistributed(Deconvolution2D(1,(5,5),strides=(2,2),
		    output_shape=(1, output_shape[0],output_shape[1], 1), 	 
		    padding='VALID'), input_shape=(3,17,17,1)))
	if layer == 2:
		modeltwo.add(TimeDistributed(Deconvolution2D(1,(5,5),strides=(2,2),
		    output_shape=(1, output_shape[0],output_shape[1], 1), 	
		    padding='VALID'), input_shape=(3,37,37,1)))
	if layer == 1:
		modeltwo.add(TimeDistributed(Deconvolution2D(1,(5,5),strides=(2,2),
		    output_shape=(1, output_shape[0],output_shape[1], 1),   
		    padding='VALID'), input_shape=(3,77,77,1)))
        result = modeltwo.predict(x)
	result = result.squeeze(axis=0)
        upscaled_activation = np.reshape(result, output_shape)
    final_visualisation_mask = upscaled_activation
    return (final_visualisation_mask - np.min(final_visualisation_mask))/(np.max(final_visualisation_mask) - np.min(final_visualisation_mask))


def plot_movie_mp4(image_array):
    dpi = 70.0
    xpixels, ypixels = image_array[0].shape[0], image_array[0].shape[1]
    fig = plt.figure(figsize=(ypixels/dpi, xpixels/dpi), dpi=dpi)
    im = plt.figimage(image_array[0])
    def animate(i):
        im.set_array(image_array[i])
        return (im,)

    anim = animation.FuncAnimation(fig, animate, frames=len(image_array))
    display(HTML(anim.to_html5_video()))
    anim.save('/home/jesse/Desktop/animation.mp4', writer='imagemagick', fps=40)

imgs = []
alpha = 0.005
beta = 1.0 - alpha
counter = 0
img_stack = []
z = []
number = 69800
numbertwo = 69800
target_image = []
path, dirs, files = os.walk('/home/jesse/Desktop/imagefiles/image_set/').next()
length = len(files)
quarterlength = (length - (length % n_stacked))/n_stacked	
for a in range(quarterlength):	
	display_img_stack = []
	for b in range(n_stacked):	
	    img = cv2.imread('/home/jesse/Desktop/imagefiles/image_set/'+ str(number) + '.png')	
	    img = img[210:500, 70:570]
	    img = cv2.resize(img, (157, 157), interpolation=cv2.INTER_CUBIC)
	    img_stack.append(img.astype(np.float32))
	    display_img_stack.append(img.astype(np.float32))
	    number = number + 1	
	    counter += 1	
	if counter == 1:
		cv2.imshow(str(img.shape), img)
	 	cv2.waitKey(1000)
	    	cv2.destroyAllWindows()
	if len(img_stack) > 1:
		img_stack = img_stack[-n_stacked:]
	img = np.stack(img_stack)
	salient_mask = compute_visualisation_mask(img)
	for a in range(n_stacked):
    		temp_img = cv2.imread('/home/jesse/Desktop/imagefiles/image_set/'+ str(numbertwo) + '.png')	
		numbertwo = numbertwo + 1
	        temp_img = temp_img[210:500, 70:570]
	        temp_img = cv2.resize(temp_img, (157, 157), interpolation=cv2.INTER_CUBIC)
		temp_img = cv2.cvtColor(temp_img, cv2.COLOR_BGR2RGB)
		salient_masked_one = salient_mask[0,:,:]
		salient_masked_two = salient_mask[1,:,:]
		salient_masked_three = salient_mask[2,:,:]
		salient_mask_stacked = np.dstack((salient_masked_one,salient_masked_two))
		salient_mask_stacked = np.dstack((salient_mask_stacked,salient_masked_three))
		blend = cv2.addWeighted(temp_img.astype('float32'), alpha, salient_mask_stacked, beta, 0.0)			
		imgs.append(blend)
	print(counter)
        if counter >= 1000:
       		break
plot_movie_mp4(imgs)
