#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Aug  7 10:31:41 2019

@author: dhruvrajrawat
Title: Old Is GOLD
"""

import autograd.numpy as np
import pandas as pd
from autograd import grad
import seaborn as sns
import matplotlib.pyplot as plt



x= np.random.randint(100,size=100)


y_true = (1*x**2).reshape(100,)



coef_x = 50
def cost(x,y_true):
    z= (y_true - (coef_x*x**2))**2
    return z


epoch = 100
alpha=0.000000009
m=100

d_model = grad(cost)

prev_grad = 0


reached_point = 0.000000001
overshooting_point  = 50000000000
check = 0


count = 1

grad_arr = []
count_arr = []
coef_arr = []

for j in range(5):
    print('Here')
    for i in range(epoch):
        
        current_grad = d_model(float(x[i]),y_true[i])
        
        if (abs(current_grad- prev_grad) < reached_point ):
            print('The Grad is UnderShooting! Breaking.....')
            check =1
            print(reached_point)
            break
            
        if(abs(current_grad-prev_grad) > overshooting_point):
            print('The Grad is Overshooting! Breaking.....')
            check =1
            break
        coef_x = coef_x - alpha * (current_grad)
        print(coef_x)
        
        grad_arr.append(current_grad)
        coef_arr.append(coef_x)
        count_arr.append(count)
        count=count+1
        
        prev_grad = current_grad
        
    if(check ==1):
        print('The For Loop will be Breaked')
        break
   
    
grad_df = {'Coef':coef_arr,'Epoch':count_arr}
sns.scatterplot(x='Epoch',y='Coef',data=grad_df)

    #dw_x = grad(cost)
    #print(dw_x(1.0,2))
    #print(dw_x(x,y_1))
    #coef_x = coef_x - alpha*dw_x
    
    


x.shape
x[1]
