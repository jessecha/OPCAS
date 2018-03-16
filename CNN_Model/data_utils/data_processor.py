from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import numpy as np
import cv2
import time
import os
import pandas as pd
from tqdm import tqdm
from sklearn.model_selection import train_test_split
from sklearn import preprocessing
from sklearn.externals import joblib
import matplotlib.pyplot as plt

def load_x_dataset(n_stacked, path, n_jump=None, w=157, h=157, d=3):
    print("image loading...")
    if n_jump is None:
        n_jump = n_stacked

    assert n_jump <= n_stacked
    x, fnames = [], []

    for i in os.walk(path):
        _, _, files_ = i
        fnames.extend(files_)

    fnames = sorted(fnames, key=(lambda fname: int(os.path.splitext(fname)[0])))

    img_stack = []
    print("image processing (resizing, cropping)")
    for i, fname in tqdm(enumerate(fnames), total=len(fnames), leave=False):
        img = cv2.imread(os.path.join(path, fname))  
        img = img[210:500, 70:570]
        img = cv2.resize(img, (w, h), interpolation=cv2.INTER_CUBIC)  
        if i == 100:
            cv2.imshow(str(img.shape), img)
            cv2.waitKey(3000)
            cv2.destroyAllWindows()

        img_stack.append(img.astype(np.float32))
        if len(img_stack) > n_stacked:
            img_stack = img_stack[-n_stacked:]

        if (i+1) >= n_stacked and (i+1 - n_stacked) % n_jump == 0:
            x.append(np.stack(img_stack))

    return np.stack(x)  # train_x, test_x

def load_y_dataset(n_stacked, path, n_jump=None):
    if n_jump is None:
        n_jump = n_stacked

    attrs = ['steering', 'throttle']
    raw_data = pd.read_csv(path, header=0, encoding='utf-8')
    y = raw_data[attrs].values
    y = y[n_stacked-1:: n_jump]  # start:end:n_steps

    return y #train_y.values, test_y.values

def load_dataset(n_stacked,  img_path, out_path, w=157, h=157, d=3,
                 val_size=None, test_size=None, n_jump=None):
    assert test_size is None or (test_size >= 0.0 and test_size <= 1.0)
    assert val_size is None or (val_size >= 0.0 and val_size <= 1.0)

    x = load_x_dataset(n_stacked, img_path, n_jump=n_jump, h=h, w=w, d=d)
    y = load_y_dataset(n_stacked, out_path, n_jump=n_jump)
    assert len(x) == len(y), "xlen{}, ylen{}".format(len(x), len(y))

    train_x, train_y = x, y
    val_x, val_y = test_x, test_y = None, None

    if test_size is not None:
        train_x, test_x, train_y, test_y = train_test_split(
                x, y, test_size=test_size,
                random_state=123, shuffle=True
        )

    if val_size is not None:
        train_x, val_x, train_y, val_y = train_test_split(
                train_x, train_y, test_size=val_size,
                random_state=123, shuffle=True
        )

    return train_x, val_x, test_x, train_y, val_y, test_y

def load_shuffled_dataset(n_stacked,  img_path, out_path, w=157, h=157, d=3,
                 val_size=None, test_size=None, n_jump=None):
    assert test_size is None or (test_size >= 0.0 and test_size <= 1.0)
    assert val_size is None or (val_size >= 0.0 and val_size <= 1.0)

    x = load_x_dataset(n_stacked, img_path, n_jump=n_jump, h=h, w=w, d=d)
    y = load_y_dataset(n_stacked, out_path, n_jump=n_jump)
    assert len(x) == len(y), "xlen{}, ylen{}".format(len(x), len(y))

    train_x, train_y = x, y
    val_x, val_y = test_x, test_y = None, None

    if test_size is not None:
        train_x, test_x, train_y, test_y = train_test_split(
                x, y, test_size=test_size,
                random_state=123, shuffle=True
        )

    if val_size is not None:
        train_x, val_x, train_y, val_y = train_test_split(
                train_x, train_y, test_size=val_size,
                random_state=123, shuffle=True
        )

    return train_x, val_x, test_x, train_y, val_y, test_y

