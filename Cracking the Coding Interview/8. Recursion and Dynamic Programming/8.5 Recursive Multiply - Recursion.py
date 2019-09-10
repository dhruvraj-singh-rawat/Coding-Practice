#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Sep 10 19:47:02 2019

@author: dhruvrajrawat
"""

def recursiveMultiply(m,n):
    
    if(n==0):
        return 0
    
    return m+recursiveMultiply(m,n-1)

print(recursiveMultiply(5,5))