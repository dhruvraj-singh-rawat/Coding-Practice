#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Nov  5 05:17:41 2019

@author: dhruvrajrawat
@Title: Stochastic Gradient Descent -- NonVectorized
"""

import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import math




x= np.random.randint(100,size=100)

y_true = (2*x).reshape(100,)

n_epoch = 5
l_rate= 0.1
theta = np.random.randn(1)
theta_he = np.random.randn(1) #np.random.randn(1)*np.sqrt(2/x.size)

theta_store = []
time_theta = []
count=1

for epoch in range(n_epoch):
    for n in range(x.size):
        
        grad = 2*x[n]*(x[n] * theta_he - y_true[n])
        theta_he = theta_he - l_rate * grad
        print(grad ,' -> ',theta_he)
        
        theta_store.append(np.asscalar(theta_he))
        time_theta.append(count)
        count=count+1
        
        
        if(grad==0):
            print(count)
            break
        if(math.isnan(grad)):
            break
        
    

grad_df = {'Theta':theta_store,'Epoch':time_theta}
sns.scatterplot(x='Epoch',y='Theta',data=grad_df)