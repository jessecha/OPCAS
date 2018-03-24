from keras.layers import Input, Dense, merge
from keras.layers.convolutional import Conv2DTranspose
from keras.models import Model
from keras.models import Sequential
from keras.layers import Convolution2D, MaxPooling2D, Reshape, BatchNormalization, Lambda
from keras.layers import Activation, Dropout, Flatten, Dense
from keras.layers.advanced_activations import ELU
from keras import regularizers
from keras import optimizers
from keras import backend as K
import tensorflow as tf
import numpy as np
import cv2
import os
from matplotlib import pyplot as plt
from matplotlib import animation
from IPython.display import display, HTML
from glob import iglob
import matplotlib.animation as animation
from keras.backend.tensorflow_backend import set_session
from model.models import build_2d_cnn
config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))

model = build_2d_cnn(w=104, h=104, d=3)
model.load_weights('2DCNN.hdf5')

img_in = Input(shape=(104, 104, 3), name='img_in')
h = 104
w = 104
d = 3
x = img_in
x = Convolution2D(24, (5,5), strides=(2,2), activation='elu', name='conv1', input_shape=(h, w, d))(x)
x = Convolution2D(32, (5,5), strides=(2,2), activation='elu', name='conv2', input_shape=(h, w, d))(x)
x = Convolution2D(64, (5,5), strides=(2,2), activation='elu', name='conv3', input_shape=(h, w, d))(x)
x = Convolution2D(64, (3,3), strides=(1,1), activation='elu', name='conv4', input_shape=(h, w, d))(x)
conv_5 = Convolution2D(64, (3,3), strides=(1,1), activation='elu', name='conv5', input_shape=(h, w, d))(x)
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
    upscaled_activation = np.ones((5,5))       # Change Values Here!
    for layer in [5, 4, 3, 2, 1]:
        averaged_activation = np.mean(activations[layer], axis=3).squeeze(axis=0) * upscaled_activation
        output_shape = (activations[layer - 1].shape[1], activations[layer - 1].shape[2])
        x = tf.constant(
            np.reshape(averaged_activation, (1,averaged_activation.shape[0],averaged_activation.shape[1],1)),
            tf.float32
        )
        conv = tf.nn.conv2d_transpose(
            x, layers_kernels[layer],
            output_shape=(1,output_shape[0],output_shape[1], 1), 
            strides=layers_strides[layer], 
            padding='VALID'
        )

        with tf.Session() as session:
            result = session.run(conv)
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
for path in sorted(iglob('/home/jesse/Desktop/Uncropped_Dataset/image_set/*.png'), key=os.path.getmtime):
    img = cv2.imread(path)
    img = img[210:500, 70:570]
    img = cv2.resize(img, (104, 104), interpolation=cv2.INTER_CUBIC)
    if counter == 1:
    	cv2.imshow(str(img.shape), img)
    	cv2.waitKey(1000)
    	cv2.destroyAllWindows()
    salient_mask = compute_visualisation_mask(img)
    salient_mask_stacked = np.dstack((salient_mask,salient_mask))
    salient_mask_stacked = np.dstack((salient_mask_stacked,salient_mask))
    img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    blend = cv2.addWeighted(img.astype('float32'), alpha, salient_mask_stacked, beta, 0.0)
    imgs.append(blend)
    counter += 1
    print(counter)
    if counter >= 1000:
        break

plot_movie_mp4(imgs)
