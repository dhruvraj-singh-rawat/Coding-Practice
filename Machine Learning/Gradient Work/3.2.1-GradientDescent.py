#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Nov  6 10:10:16 2019

@author: dhruvrajrawat
@Title: Vectorized-Batch Gradient Descent - With Correlation BASED Weight Initialization (NonLinear)
"""

import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import r2_score
from scipy.stats.stats import pearsonr 



np.random.seed(300)
X=[]
X.append(np.random.randint(100,size=100))
X.append(2* np.random.randint(100,size=100))
X= np.asarray(X).T

# Creating POly Feature set from the Existing Feature Set
poly = PolynomialFeatures(2)
X1 = poly.fit_transform(X)

# =============================================================================
# OLD array BASED Feature assignment
# x1= np.random.randint(100,size=100)
# x2 = 2* np.random.randint(100,size=100)
# x3 = 3* np.random.randint(100,size=100)
# =============================================================================
y_true = (X[:,0]**2 + 5*X[:,1]).reshape(100,1)

Theta=[]
Theta.append(0) # Constant Value (Manual INIT)
Theta.append(np.corrcoef(np.ravel(X1[:,1]), np.ravel(y_true))[0][1])
Theta.append(np.corrcoef(np.ravel(X1[:,2]), np.ravel(y_true))[0][1])
Theta.append(np.corrcoef(np.ravel(X1[:,3]), np.ravel(y_true))[0][1])
Theta.append(np.corrcoef(np.ravel(X1[:,4]), np.ravel(y_true))[0][1])
Theta.append(np.corrcoef(np.ravel(X1[:,5]), np.ravel(y_true))[0][1])

Theta = np.reshape(np.asarray(Theta),(1,6))

# =============================================================================

# theta_he_1 = np.random.randn(1)#np.random.randn(1)*np.sqrt(2/x.size)
# theta_he_2 = np.random.randn(1)
# theta_he_3 = np.random.randn(1)
# =============================================================================

n_epoch = 50
l_rate= 0.0000000001

theta_store = []
time_theta = []

for epoch in range(n_epoch):
    
    
    grad_1 = 2* np.sum(np.reshape(X1[:,0],(100,1)) * np.subtract(np.dot(X1,Theta.T),y_true))/X[:,0].size
    
    grad_2 = 2* np.sum(np.reshape(X1[:,1],(100,1)) * np.subtract(np.dot(X1,Theta.T),y_true))/X[:,0].size
    
    grad_3 = 2* np.sum(np.reshape(X1[:,2],(100,1)) * np.subtract(np.dot(X1,Theta.T),y_true))/X[:,0].size
    
    grad_4 = 2* np.sum(np.reshape(X1[:,3],(100,1)) * np.subtract(np.dot(X1,Theta.T),y_true))/X[:,0].size
    
    grad_5 = 2* np.sum(np.reshape(X1[:,4],(100,1)) * np.subtract(np.dot(X1,Theta.T),y_true))/X[:,0].size
    
    grad_6 = 2* np.sum(np.reshape(X1[:,5],(100,1)) * np.subtract(np.dot(X1,Theta.T),y_true))/X[:,0].size
    
    
   
    
    Theta[:,0] = Theta[:,0] - l_rate * grad_1
    Theta[:,1] = Theta[:,1] - l_rate * grad_2
    Theta[:,2] = Theta[:,2] - l_rate * grad_3
    Theta[:,3] = Theta[:,3] - l_rate * grad_4
    Theta[:,4] = Theta[:,4] - l_rate * grad_5
    Theta[:,5] = Theta[:,5] - l_rate * grad_6

y_pred  = X1[:,0]*Theta[:,0] + X1[:,1]*Theta[:,1] + X1[:,2]*Theta[:,2] + X1[:,3]*Theta[:,3] + X1[:,4]*Theta[:,4] + X1[:,5]*Theta[:,5] 

print(r2_score(y_true,y_pred))