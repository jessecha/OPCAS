from keras.models import Sequential
from keras.layers import Flatten, Activation, Dense, Dropout, MaxPooling3D, Conv3D, Convolution2D, MaxPooling2D, SpatialDropout2D, Lambda
from keras.layers.normalization import BatchNormalization
from keras.layers.noise import AlphaDropout
from sklearn.externals import joblib
from keras.regularizers import l2
from keras.layers.advanced_activations import ELU
import matplotlib.pyplot as plt

def build_cnn(w=200, h=150, d=3):
    model = Sequential()
    model.add(Lambda(lambda x: x/127.5 - 1.0,input_shape=(h,w,d)))
    model.add(Convolution2D(24, 5, 5, subsample=(2, 2), border_mode="same", kernel_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(36, 5, 5, subsample=(2, 2), border_mode="same", kernel_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(48, 3, 3, subsample=(2, 2), border_mode="same", kernel_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(64, 3, 3, subsample=(2, 2), border_mode="same", kernel_regularizer=l2(0.001)))
    model.add(Convolution2D(64, 3, 3, subsample=(2, 2), border_mode='same', kernel_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Flatten())
    model.add(Dropout(.2))
    model.add(ELU())
    model.add(Dense(512), kernel_regularizer=l2(0.001))
    model.add(BatchNormalization())
    model.add(Dropout(.5))
    model.add(ELU())
    model.add(Dense(256), kernel_regularizer=l2(0.001))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dense(128), kernel_regularizer=l2(0.001))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dense(2), kernel_regularizer=l2(0.001))
    model.add(Activation('tanh'))
    model.compile(loss='mean_squared_error',
                  optimizer='adam',
                  metrics=['accuracy'])
    model.summary()
    return model

def build_3d_cnn(w, h, d, s):
    '''
        w : width
        h : height
        d : depth
        s : n_stacked
    '''
    model = Sequential()
    #First layer
    
    # Second layer
    model.add(Conv3D(
        filters=16, kernel_size=(5,5,5), strides=(1,3,3),
        data_format='channels_last', border_mode='same',
        input_shape=(s, h, w, d))
    )
    model.add(Activation('ELU'))
    model.add(MaxPooling3D(
        pool_size=(1,2,2), strides=(1,2,2), padding='valid', data_format=None)
    )
    # Third layer
    model.add(Conv3D(
        filters=32, kernel_size=(3,3,3), strides=(1,1,1),
        data_format='channels_last', border_mode='same')
    )
    model.add(Activation('ELU'))
    model.add(MaxPooling3D(
        pool_size=(1, 2, 2), strides=(1,2,2), padding='valid', data_format=None)
    )
    # Fourth layer
    model.add(Conv3D(
        filters=64, kernel_size=(3,3,3), strides=(1,1,1),
        data_format='channels_last', border_mode='same')
    )
    model.add(Activation('ELU'))
    model.add(MaxPooling3D(
        pool_size=(1,2,2), strides=(1,2,2), padding='valid', data_format=None)
    )
    # Fifth layer
    model.add(Conv3D(
        filters=128, kernel_size=(3,3,3), strides=(1,1,1),
        data_format='channels_last', border_mode='same')
    )
    model.add(Activation('ELU'))
    model.add(MaxPooling3D(
        pool_size=(1,2,2), strides=(1,2,2), padding='valid', data_format=None)
    )

    # Sixth layer
    model.add(Conv3D(
        filters=256, kernel_size=(3,3,3), strides=(1,1,1),
        data_format='channels_last', border_mode='same')
    )
    model.add(Activation('ELU'))
    model.add(MaxPooling3D(
        pool_size=(1,2,2), strides=(1,2,2), padding='valid', data_format=None)
    )

    # Fully connected layer
    model.add(Flatten())

    model.add(Dense(1024)) #512
    model.add(BatchNormalization())
    model.add(Activation('ELU'))
    model.add(Dropout(0.5))

    model.add(Dense(128))
    model.add(BatchNormalization())
    model.add(Activation('ELU'))
    model.add(Dropout(0.5))

    model.add(Dense(64))
    model.add(BatchNormalization())
    model.add(Activation('ELU'))
    model.add(Dropout(0.5))

    model.add(Dense(2))
    model.add(Activation('tanh'))

    model.compile(
        loss='mean_squared_error', optimizer='adam', metrics=['accuracy']
    )
    model.summary()
    return model


