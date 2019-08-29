#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Aug 28 18:09:38 2019

@author: dhruvrajrawat
"""

denomination = [1,2,3,7]
num = 11

sol=[11]*(num+1)

for i in range(num+1):
    if (i==0):
        sol[i]=0
        
        
    for deno in denomination:
        
        if (i<deno):
            break
        
        if(min(sol[i],sol[i-deno]+1)<sol[i]):
            sol[i]=sol[i-deno]+1
            

print('The Minimum of coins required are: ',sol[11])
        