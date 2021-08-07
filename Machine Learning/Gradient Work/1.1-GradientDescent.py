#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Nov  5 17:37:36 2019

@author: dhruvrajrawat
Title: Sto
"""


import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import math

np.random.seed(1)

x=[]
x.append(np.random.randint(100,size=100))
x.append(2* np.random.randint(100,size=100))
x.append(3* np.random.randint(100,size=100))
x= np.asarray(X).T

y_true = (2*X[:,0] + 5*X[:,1] + 8*X[:,2]).reshape(100,1)


Theta=[]
Theta.append(np.corrcoef(np.ravel(X[:,0]), np.ravel(y_true))[0][1])
Theta.append(np.corrcoef(np.ravel(X[:,1]), np.ravel(y_true))[0][1])
Theta.append(np.corrcoef(np.ravel(X[:,2]), np.ravel(y_true))[0][1])


n_epoch = 5
l_rate= 0.1

theta_store = []
time_theta = []
count=1

for epoch in range(n_epoch):
    for n in range(x.shape[0]):
        
        grad_1 = 2*x[n]*(x[n] * theta_he - y_true[n])
        theta_he = theta_he - l_rate * grad_1
        print(grad ,' -> ',theta_he)

        grad_2 = 2*x[n]*(x[n] * theta_he - y_true[n])
        theta_he = theta_he - l_rate * grad_2
        
        
        
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