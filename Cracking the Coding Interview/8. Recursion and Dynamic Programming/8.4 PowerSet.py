#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Sep 10 16:17:00 2019

@author: dhruvrajrawat
"""

name_set = ['d','h','r','u','v']


power_set = 2**len(name_set)

for pos in range(power_set):
    for j in range(len(name_set)):
        if(pos & (1<<j)>0):
            print(name_set[j],end="")
    
    print("")