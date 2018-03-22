from keras.models import Sequential
from keras.layers import Flatten, Activation, Dense, Dropout, MaxPooling3D, Conv3D, Convolution2D, MaxPooling2D, SpatialDropout2D, Lambda
from keras.layers.normalization import BatchNormalization
from keras.layers.noise import AlphaDropout
from sklearn.externals import joblib
from keras.regularizers import l2
from keras.layers.recurrent import LSTM
from keras.layers.wrappers import TimeDistributed
from keras import regularizers
from keras import optimizers
from keras.layers.advanced_activations import ELU
import matplotlib.pyplot as plt

def build_2d_cnn(w, h, d):
    model = Sequential()
    model.add(Lambda(lambda x: x/127.5 - 1.0,input_shape=(h,w,d)))
    model.add(Convolution2D(filters=24, kernel_size=(5, 5), 
        strides=(2,2),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv1'))
    model.add(Convolution2D(filters=32, kernel_size=(5, 5),
        strides=(2,2),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv2'))
    model.add(Convolution2D(filters=64, kernel_size=(5, 5),
        strides=(2,2),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv3'))
    model.add(Convolution2D(filters=64, kernel_size=(3, 3),
        strides=(1,1),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv4'))
    model.add(Convolution2D(filters=64, kernel_size=(3, 3),
        strides=(1,1),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv5'))
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

def build_lrcn(w, h, d, s):
    model = Sequential()
    model.add(TimeDistributed(Lambda(lambda x: x/127.5 - 1.0), input_shape=(s,h,w,d)))
    model.add(TimeDistributed(Convolution2D(filters=24, kernel_size=(5, 5),
        strides=(2,2),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv1')))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(TimeDistributed(Convolution2D(filters=32, kernel_size=(5, 5),
        strides=(2,2),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv2')))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(TimeDistributed(Convolution2D(filters=64, kernel_size=(5, 5),
        strides=(2,2),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv3')))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(TimeDistributed(Convolution2D(filters=64, kernel_size=(3, 3),
        strides=(1,1),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv4')))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    model.add(TimeDistributed(Convolution2D(filters=64, kernel_size=(3, 3),
        strides=(1,1),data_format='channels_last', input_shape=(h, w, d), activation='elu', name = 'conv5')))
    #model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2), padding='valid', data_format=None))
    #model.add(Convolution2D(filters=64, kernel_size=(3, 3),
    #    strides=(3,3),data_format='channels_last', border_mode='same',
    #input_shape=(h, w, d), kernel_regularizer=regularizers.l2(0.001)))
    model.add(TimeDistributed(Flatten()))
    model.add(LSTM(2048, return_sequences=False, stateful=False))
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

def build_3d_cnn(w, h, d, s):
    model = Sequential()
    model.add(Lambda(lambda x: x/127.5 - 1.0, input_shape=(s,h,w,d)))	
    # First layer
    model.add(Conv3D(
        filters=24, kernel_size=(5,5,5), strides=(1,2,2),
        data_format='channels_last', border_mode='same',
        input_shape=(s, h, w, d), activation='elu', name = 'conv1')
    )
    # Second layer
    model.add(Conv3D(
        filters=32, kernel_size=(5,5,5), strides=(1,2,2),
        data_format='channels_last', border_mode='same',
        input_shape=(s, h, w, d), activation='elu', name = 'conv2')
    )
    # Third layer
    model.add(Conv3D(
        filters=64, kernel_size=(5,5,5), strides=(1,2,2),
        data_format='channels_last', border_mode='same',
        input_shape=(s, h, w, d), activation='elu', name = 'conv3')
    )
    # Fourth layer
    model.add(Conv3D(
        filters=64, kernel_size=(3,3,3), strides=(1,1,1),
        data_format='channels_last', border_mode='same',
        input_shape=(s, h, w, d), activation='elu', name = 'conv4')
    )
    # Fifth layer
    model.add(Conv3D(
        filters=64, kernel_size=(3,3,3), strides=(1,1,1),
        data_format='channels_last', border_mode='same',
        input_shape=(s, h, w, d), activation='elu', name = 'conv5')
    )
    # Fully connected layer
    model.add(Flatten())
    model.add(Dense(1152)) 
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dropout(0.3))
    model.add(Dense(100))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dropout(0.5))
    model.add(Dense(50))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dropout(0.3))
    model.add(Dense(10))
    model.add(BatchNormalization())
    model.add(ELU())
    model.add(Dropout(0.3))	
    model.add(Dense(2))
    model.add(Activation('linear'))
    model.compile(
        loss='mean_squared_error', optimizer='adam', metrics=['accuracy']
    )
    model.summary()
    return model


