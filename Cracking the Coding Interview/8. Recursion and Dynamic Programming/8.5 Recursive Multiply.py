#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Sep 10 19:22:42 2019

@author: dhruvrajrawat
"""

def bitMultiply(m,n):
    
    ans = 0
    count = 0
    
    while(n>0):
       
        if(n%2==1):
            
            ans = ans+(m<<count)
            
        
        count=count+1
        n=int(n/2)
    
    return ans

print(bitMultiply(2,3))