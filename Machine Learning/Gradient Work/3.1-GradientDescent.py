
"""
Created on Tue Nov  5 05:17:41 2019

@author: dhruvrajrawat
@Title: Vectorized-Batch Gradient Descent - Random INITIALIZATION

"""

import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
from scipy.stats.stats import pearsonr 
from sklearn.metrics import r2_score

np.random.seed(10)

X=[]
X.append(np.random.randint(100,size=100))
X.append(2* np.random.randint(100,size=100))
X.append(3* np.random.randint(100,size=100))
X= np.asarray(X).T

# =============================================================================
# OLD array BASED Feature assignment
# x1= np.random.randint(100,size=100)
# x2 = 2* np.random.randint(100,size=100)
# x3 = 3* np.random.randint(100,size=100)
# =============================================================================
y_true = (2*X[:,0] + 5*X[:,1] + 8*X[:,2]).reshape(100,1)




#Title: Random Weight INIT

Theta=[]
Theta.append(np.random.randn(1))
Theta.append(np.random.randn(1))
Theta.append(np.random.randn(1))




Theta = np.reshape(np.asarray(Theta),(1,3))

# =============================================================================

# theta_he_1 = np.random.randn(1)#np.random.randn(1)*np.sqrt(2/x.size)
# theta_he_2 = np.random.randn(1)
# theta_he_3 = np.random.randn(1)
# =============================================================================





n_epoch = 5
l_rate= 0.00001



theta_store = []
time_theta = []

for epoch in range(n_epoch):
    
    
    grad_1 = 2* np.sum(np.reshape(X[:,0],(100,1)) * np.subtract(np.dot(X,Theta.T),y_true))/X[:,0].size
    
    grad_2 = 2* np.sum(np.reshape(X[:,1],(100,1)) * np.subtract(np.dot(X,Theta.T),y_true))/X[:,0].size
    
    grad_3 = 2* np.sum(np.reshape(X[:,2],(100,1)) * np.subtract(np.dot(X,Theta.T),y_true))/X[:,0].size
    
    
   
    
    Theta[:,0] = Theta[:,0] - l_rate * grad_1
    Theta[:,1] = Theta[:,1] - l_rate * grad_2
    Theta[:,2] = Theta[:,2] - l_rate * grad_3
    
    

# =============================================================================
# for epoch in range(n_epoch):
#     for n in range(x.size):
#         grad = 2*x[n]*(x[n] * theta_he - y_true[n])
#         theta_he = theta_he - l_rate * grad
#         print(grad ,' -> ',theta_he)
#         
#         theta_store.append(np.asscalar(theta_he))
#         time_theta.append(count)
#         count=count+1
#         
#         if(grad==0):
#             print(count)
#             break
#         if(math.isnan(grad)):
#             break
# =============================================================================
        
    
y_pred  = np.reshape(X[:,0]*Theta[:,0] + X[:,1]*Theta[:,1] + X[:,2]*Theta[:,2],(100,1))
r2_score(y_pred,y_true)


#grad_df = {'Theta':theta_store,'Epoch':time_theta}
#sns.scatterplot(x='Epoch',y='Theta',data=grad_df)