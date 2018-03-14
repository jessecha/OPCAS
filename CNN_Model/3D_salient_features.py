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
import matplotlib.animation as animation
from keras.backend.tensorflow_backend import set_session
config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
#config.gpu_options.per_process_gpu_memory_fraction = 0.95 
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))

global n_stacked
n_stacked = 2

def build_cnn(w=320, h=240, d=3, s=n_stacked):
    model = Sequential()
    model.add(Lambda(lambda x: x/127.5 - 1.0, input_shape=(s,h,w,d)))
    model.add(Convolution3D(filters=24, kernel_size=(5,5,5),
        strides=(1,2,2), border_mode= "same", data_format='channels_last', input_shape=(s, h, w, d), activation='elu', name = 'conv1'))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(Convolution3D(filters=32, kernel_size=(5,5,5),
        strides=(1,2,2), border_mode= "same", data_format='channels_last', input_shape=(s, h, w, d), activation='elu', name = 'conv2'))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(Convolution3D(filters=64, kernel_size=(5,5,5),
        strides=(1,2,2), border_mode= "same", data_format='channels_last', input_shape=(s, h, w, d), activation='elu', name = 'conv3'))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(Convolution3D(filters=64, kernel_size=(3,3,3),
        strides=(1,1,1), border_mode= "same", data_format='channels_last', input_shape=(s, h, w, d), activation='elu', name = 'conv4'))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(Convolution3D(filters=64, kernel_size=(3,3,3),
        strides=(1,1,1), border_mode= "same", data_format='channels_last', input_shape=(s, h, w, d), activation='elu', name = 'conv5'))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    #model.add(Convolution2D(filters=64, kernel_size=(3, 3),
    #    strides=(3,3),data_format='channels_last', border_mode='same',
    #input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(Flatten())
    model.add(Dropout(.3))
    model.add(ELU())
    model.add(Dense(1152, kernel_regularizer=regularizers.l2(0.001)))
    model.add(BatchNormalization())
    model.add(Dropout(.3))
    model.add(ELU())
    model.add(Dense(100, kernel_regularizer=regularizers.l2(0.001)))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dense(50, kernel_regularizer=regularizers.l2(0.001)))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dense(10, kernel_regularizer=regularizers.l2(0.001)))
    model.add(BatchNormalization())
    model.add(ELU())	
    model.add(Dense(2, kernel_regularizer=regularizers.l2(0.001)))
    model.add(Activation('linear'))
    optimizer = optimizers.adam(lr = 0.00005)	
    model.compile(loss='mean_squared_error',
                  optimizer=optimizer,
                  metrics=["mse", 'accuracy'])
    model.summary()
    return model

model = build_cnn()
model.load_weights('model.hdf5')

img_in = Input(shape=(n_stacked, 240, 320, 3), name='img_in')
h = 240
w = 320
d = 3
s = n_stacked
x = img_in
#x = Lambda(lambda z: z/127.5 - 1.0,input_shape=(200,200,3))(x)
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
    img = img[0,:,:,:,:]
    activations = functor([np.array([img])])	
    upscaled_activation = np.ones((4,15,20)) #((6, 3))
    for layer in [5, 4, 3, 2, 1]:
	the_layers = np.mean(activations[layer], axis=4).squeeze(axis=0)
	#print(the_layers.shape)
        averaged_activation = the_layers * upscaled_activation
        output_shape = (activations[layer - 1].shape[1], activations[layer - 1].shape[2], activations[layer - 1].shape[3])
        x = tf.constant(
            np.reshape(averaged_activation, (1, averaged_activation.shape[0],averaged_activation.shape[1],averaged_activation.shape[2],1)),
            tf.float32
        )
	#print(x)
        conv = tf.nn.conv3d_transpose(
            x, layers_kernels[layer],
            output_shape=(1, output_shape[0], output_shape[1],output_shape[2], 1), 
            strides=layers_strides[layer], 
            padding='SAME'
        )

        with tf.Session() as session:
            result = session.run(conv)
        upscaled_activation = np.reshape(result, output_shape)
    final_visualisation_mask = upscaled_activation
    return (final_visualisation_mask - np.min(final_visualisation_mask))/(np.max(final_visualisation_mask) - np.min(final_visualisation_mask))

def plot_movie_mp4(image_array):
    dpi = 100.0
    xpixels, ypixels = image_array[0].shape[0], image_array[0].shape[1]
    fig = plt.figure(figsize=(ypixels/dpi, xpixels/dpi), dpi=dpi)
    im = plt.figimage(image_array[0])
    def animate(i):
        im.set_array(image_array[i])
        return (im,)

    anim = animation.FuncAnimation(fig, animate, frames=len(image_array))
    display(HTML(anim.to_html5_video()))
    anim.save('animation.mp4', writer='imagemagick', fps=40)

imgs = []
alpha = 0.005
beta = 1.0 - alpha
counter = 0
img_stack = []
z = []
number = 1
numbertwo = 1
target_image = []
#for path in sorted(iglob('/home/jesse/Desktop/imagefiles/no_crop_image_set/*.png'), key=os.path.getmtime):  
path, dirs, files = os.walk('/home/jesse/Desktop/imagefiles/no_crop_image_set').next()
length = len(files)
quarterlength = (length - (length % n_stacked))/n_stacked	
for a in range(quarterlength):	
	display_img_stack = []
	for b in range(n_stacked):	
	    img = cv2.imread('/home/jesse/Desktop/imagefiles/no_crop_image_set/'+ str(number) + '.png')	
	    img = img[225:285, 230:445]
	    img = cv2.resize(img, (320, 240), interpolation=cv2.INTER_CUBIC)
	    img_stack.append(img.astype(np.float32))
	    display_img_stack.append(img.astype(np.float32))
	    number = number + 1	
	    counter += 1	
	    #mask = cv2.imread('/home/jesse/Desktop/DNRacing/CNN_Model/overlay.png',0)
	    #img = cv2.bitwise_and(img,img,mask = mask)
	if counter == 1:
		cv2.imshow(str(img.shape), img)
	 	cv2.waitKey(1000)
	    	cv2.destroyAllWindows()

	#if len(img_stack) > 1:
	img_stack = img_stack[-n_stacked:]
	#if (i+1) >= 1 and (i+1 - 1) % n_jump == 0:
	z.append(np.stack(img_stack))
	img =  np.stack(z)
	#print(IMAGE.shape)
	salient_mask = compute_visualisation_mask(img)
	#print(salient_mask.shape)
	for a in range(n_stacked):
    		temp_img = cv2.imread('/home/jesse/Desktop/imagefiles/no_crop_image_set/'+ str(numbertwo) + '.png')	
	        temp_img = temp_img[225:285, 230:445]
	        temp_img = cv2.resize(temp_img, (320, 240), interpolation=cv2.INTER_CUBIC)
		temp_img = cv2.cvtColor(temp_img, cv2.COLOR_BGR2RGB)
		for b in range(n_stacked)
			salient_masked = salient_mask[b,:,:]
			salient_mask_stacked = np.dstack((salient_masked,salient_masked))
			salient_mask_stacked = np.dstack((salient_mask_stacked,salient_masked))
			if b == 0:
				blend = cv2.addWeighted(temp_img.astype('float32'), alpha, salient_mask_stacked, beta, 0.0)			
			if b > 0:
				blend = cv2.addWeighted(blend, alpha, salient_mask_stacked, beta, 0.0)
		imgs.append(blend)
	print(counter)
        if counter >= 1000:
       		break

plot_movie_mp4(imgs)
