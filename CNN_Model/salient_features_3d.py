from keras.layers import Input, Dense, merge
from keras.layers.convolutional import Conv3DTranspose
from keras.models import Model
from keras.models import Sequential
from keras.layers import Convolution3D, Conv3D, MaxPooling3D, Reshape, BatchNormalization, Lambda
from keras.layers import Activation, Dropout, Flatten, Dense
from keras.layers.advanced_activations import ELU
from keras import regularizers
from keras import optimizers
from keras import backend as K
import tensorflow as tf
import numpy as np
import cv2
import os, os.path
from matplotlib import pyplot as plt
from matplotlib import animation
from IPython.display import display, HTML
from glob import iglob
from model.models import build_3d_cnn
import matplotlib.animation as animation
from keras.backend.tensorflow_backend import set_session
config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))

global n_stacked
n_stacked = 3

model = build_3d_cnn(w=100, h=100, d=3, s=n_stacked)
model.load_weights('3DCNN.hdf5')

img_in = Input(shape=(n_stacked, 100, 100, 3), name='img_in')
h = 100
w = 100
d = 3
s = n_stacked
x = img_in
x = Conv3D(24, (5,5,5), strides=(1,2,2), activation='elu', name='conv1', border_mode='same', data_format='channels_last', input_shape=(s, h, w, d))(x)
x = Conv3D(32, (5,5,5), strides=(1,2,2), activation='elu', name='conv2', border_mode='same', data_format='channels_last', input_shape=(s, h, w, d))(x)
x = Conv3D(64, (5,5,5), strides=(1,2,2), activation='elu', name='conv3', border_mode='same', data_format='channels_last', input_shape=(s, h, w, d))(x)
x = Conv3D(64, (3,3,3), strides=(1,1,1), activation='elu', name='conv4', border_mode='same', data_format='channels_last', input_shape=(s, h, w, d))(x)
conv_5 = Conv3D(64, (3,3,3), strides=(1,1,1), activation='elu', name='conv5', border_mode='same', data_format='channels_last', input_shape=(s, h, w, d))(x)
convolution_part = Model(inputs=[img_in], outputs=[conv_5])
for layer_num in ('1', '2', '3', '4', '5'):
    convolution_part.get_layer('conv' + layer_num).set_weights(model.get_layer('conv' + layer_num).get_weights())

inp = convolution_part.input                                           # input placeholder
outputs = [layer.output for layer in convolution_part.layers]          # all layer outputs
functor = K.function([inp], outputs)

kernel_3x3x3 = tf.constant(np.array(
[
	[
		[[[1]], [[1]], [[1]]], 
 		[[[1]], [[1]], [[1]]], 
 		[[[1]], [[1]], [[1]]]
	],
	[
		[[[1]], [[1]], [[1]]], 
 		[[[1]], [[1]], [[1]]], 
 		[[[1]], [[1]], [[1]]]
	],
	[
 		[[[1]], [[1]], [[1]]], 
 		[[[1]], [[1]], [[1]]], 
 		[[[1]], [[1]], [[1]]]
	]
]
), tf.float32)

kernel_5x5x5 = tf.constant(np.array(
[
	[
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
       		[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]]
	],
	[
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]]
	],
        [
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]]
	],
	[
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]]
	],
	[
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]], 
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]],
        	[[[1]], [[1]], [[1]], [[1]], [[1]]]
	]
]
), tf.float32)

layers_kernels = {5: kernel_3x3x3, 4: kernel_3x3x3, 3: kernel_5x5x5, 2: kernel_5x5x5, 1: kernel_5x5x5}

layers_strides = {5: [1, 1, 1, 1, 1], 4: [1, 1, 1, 1, 1], 3: [1, 1, 2, 2, 1], 2: [1, 1, 2, 2, 1], 1: [1, 1, 2, 2, 1]}

def compute_visualisation_mask(img):
    activations = functor([np.array([img])])	
    upscaled_activation = np.ones((3,13,13))
    for layer in [5, 4, 3, 2, 1]:
	the_layers = np.mean(activations[layer], axis=4).squeeze(axis=0)
	averaged_activation = the_layers * upscaled_activation
        outputs_shape = (activations[layer - 1].shape[1], activations[layer - 1].shape[2], activations[layer - 1].shape[3])
        x = np.reshape(averaged_activation, (1, averaged_activation.shape[0],averaged_activation.shape[1],averaged_activation.shape[2],1))
            
	modeltwo = Sequential()
	if layer == 5:
		modeltwo.add(Conv3DTranspose(filters=1, kernel_size=(3,3,3), strides=(1,1,1),
		input_shape=(3, 13, 13, 1), data_format='channels_last',
                padding='same'))
	if layer == 4:
		modeltwo.add(Conv3DTranspose(filters=1, kernel_size=(3,3,3), strides=(1,1,1),
		input_shape=(3, 13, 13, 1), data_format='channels_last',
                padding='same'))
	if layer == 3:
		modeltwo.add(Conv3DTranspose(filters=1, kernel_size=(5,5,5), strides=(1,2,2),
		input_shape=(3, 13, 13, 1), data_format='channels_last',
                padding='same'))
	if layer == 2:
		modeltwo.add(Conv3DTranspose(filters=1, kernel_size=(5,5,5), strides=(1,2,2),
		input_shape=(3, 25, 25, 1), data_format='channels_last',
                padding='same'))
	if layer == 1:
		modeltwo.add(Conv3DTranspose(filters=1, kernel_size=(5,5,5), strides=(1,2,2),
		input_shape=(3, 50, 50, 1), data_format='channels_last',
                padding='same'))
        result = modeltwo.predict(x)
	result = result.squeeze(axis=0)
        upscaled_activation = np.reshape(result, outputs_shape)
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
number = 1
numbertwo = 1
target_image = []
path, dirs, files = os.walk('/home/jesse/Desktop/Uncropped_Dataset/image_set/').next()
length = len(files)
quarterlength = (length - (length % n_stacked))/n_stacked	
for a in range(quarterlength):	
	display_img_stack = []
	for b in range(n_stacked):	
	    img = cv2.imread('/home/jesse/Desktop/Uncropped_Dataset/image_set/'+ str(number) + '.png')	
            img = img[210:500, 70:570]
	    img = cv2.resize(img, (100, 100), interpolation=cv2.INTER_CUBIC)
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
	z.append(np.stack(img_stack))
	img =  np.stack(img_stack)
	salient_mask = compute_visualisation_mask(img)
	for a in range(n_stacked):
    		temp_img = cv2.imread('/home/jesse/Desktop/Uncropped_Dataset/image_set/'+ str(numbertwo) + '.png')	
		numbertwo = numbertwo + 1
	        temp_img = temp_img[210:500, 70:570]
	        temp_img = cv2.resize(temp_img, (100, 100), interpolation=cv2.INTER_AREA)
		temp_img = cv2.cvtColor(temp_img, cv2.COLOR_BGR2RGB)
		salient_masked_one = salient_mask[0,:,:]
		salient_masked_two = salient_mask[1,:,:]
		salient_masked_three = salient_mask[2,:,:]
		salient_mask_stacked = np.dstack((salient_masked_one,salient_masked_two))
		salient_mask_stacked = np.dstack((salient_mask_stacked,salient_masked_three))
                cv2.imshow(str(salient_mask_stacked.shape), salient_mask_stacked)
                cv2.waitKey(100)
                cv2.destroyAllWindows()
		blend = cv2.addWeighted(temp_img.astype('float32'), alpha, salient_mask_stacked, beta, 0.0)			
		imgs.append(blend)
	print(counter)
        if counter >= 1000:
       		break

plot_movie_mp4(imgs)
