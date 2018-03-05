from keras.layers import Input, Dense, merge
from keras.models import Model
from keras.layers import Convolution2D, MaxPooling2D, Reshape, BatchNormalization
from keras.layers import Activation, Dropout, Flatten, Dense
import tensorflow as tf
import numpy as np
from matplotlib import pyplot as plt
%matplotlib inline
from keras import backend as K
from matplotlib import animation
from IPython.display import display, HTML
from glob import iglob

def build_cnn(w=200, h=200, d=3):
    model = Sequential()
    model.add(Lambda(lambda x: x/127.5 - 1.0,input_shape=(h,w,d)))
    model.add(Convolution2D(filters=32, kernel_size=(5, 5),
        strides=(3,3),data_format='channels_last', border_mode='same', input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(ELU())
   #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(Convolution2D(filters=32, kernel_size=(5, 5),
        strides=(3,3),data_format='channels_last', border_mode='same',
input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(filters=48, kernel_size=(3, 3),
        strides=(3,3),data_format='channels_last', border_mode='same',
input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(filters=48, kernel_size=(3, 3),
        strides=(3,3),data_format='channels_last', border_mode='same',
input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(Convolution2D(filters=64, kernel_size=(3, 3),
        strides=(3,3),data_format='channels_last', border_mode='same',
input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(filters=64, kernel_size=(3, 3),
        strides=(3,3),data_format='channels_last', border_mode='same',
input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(ELU())
    model.add(Flatten())
    model.add(Dropout(.5))
    model.add(ELU())
    model.add(Dense(512, kernel_regularizer=regularizers.l2(0.001)))
    model.add(BatchNormalization())
    model.add(Dropout(.5))
    model.add(ELU())
    model.add(Dense(256, kernel_regularizer=regularizers.l2(0.001)))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dense(128, kernel_regularizer=regularizers.l2(0.001)))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dense(2, kernel_regularizer=regularizers.l2(0.001)))
    model.add(Activation('tanh'))
    optimizer = optimizers.adam(lr = 0.00005)	
    model.compile(loss='mean_squared_error',
                  optimizer=optimizer,
                  metrics=["mse", 'accuracy'])
    model.summary()
    return model

model = build_cnn()
model.load_weights('model.h5')

img_in = Input(shape=(200, 200, 3), name='img_in')
x = img_in
x = Convolution2D(32, (5,5), strides=(3,3), activation='elu', name='conv1')(x)
x = Convolution2D(32, (5,5), strides=(3,3), activation='elu', name='conv2')(x)
x = Convolution2D(48, (3,3), strides=(3,3), activation='elu', name='conv3')(x)
x = Convolution2D(48, (3,3), strides=(3,3), activation='elu', name='conv4')(x)
x = Convolution2D(64, (3,3), strides=(3,3), activation='elu', name='conv5')(x)
conv_6 = Convolution2D(64, (3,3), strides=(3,3), activation='elu', name='conv6')(x)
convolution_part = Model(inputs=[img_in], outputs=[conv_6])
for layer_num in ('1', '2', '3', '4', '5','6'):
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

layers_kernels = {6: kernel_3x3, 5: kernel_3x3, 4: kernel_3x3, 3: kernel_3x3, 2: kernel_5x5, 1: kernel_5x5}

layers_strides = {6: [1, 3, 3, 1], 5: [1, 3, 3, 1], 4: [1, 3, 3, 1], 3: [1, 3, 3, 1], 2: [1, 3, 3, 1], 1: [1, 3, 3, 1]}

def compute_visualisation_mask(img):
    activations = functor([np.array([img])])
    upscaled_activation = np.ones((3, 6))
    for layer in [6, 5, 4, 3, 2, 1]:
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
    dpi = 72.0
    xpixels, ypixels = image_array[0].shape[0], image_array[0].shape[1]
    fig = plt.figure(figsize=(ypixels/dpi, xpixels/dpi), dpi=dpi)
    im = plt.figimage(image_array[0])

    def animate(i):
        im.set_array(image_array[i])
        return (im,)

    anim = animation.FuncAnimation(fig, animate, frames=len(image_array))
    anim.save('animation.mp4', writer='imagemagick', fps=40)

imgs = []
alpha = 0.004
beta = 1.0 - alpha
counter = 0
for path in sorted(iglob('/home/jesse/Desktop/imagefiles/image/*.png')):
    img = cv2.imread(path)
    salient_mask = compute_visualisation_mask(img)
    salient_mask_stacked = np.dstack((salient_mask,salient_mask))
    salient_mask_stacked = np.dstack((salient_mask_stacked,salient_mask))
    blend = cv2.addWeighted(img.astype('float32'), alpha, salient_mask_stacked, beta, 0.0)
    imgs.append(blend)
    counter += 1
    if counter >= 400:
        break

plot_movie_mp4(imgs)
