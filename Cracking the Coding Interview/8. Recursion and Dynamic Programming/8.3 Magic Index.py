#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Sep  9 21:31:48 2019

@author: dhruvrajrawat
"""

def binarySearch (arr,l,r):
    
    mid = int(l+(r-l)/2)
    
    if(l<=r):
        
        if(arr[mid]==mid):
            return mid
        
        if(arr[mid]>mid):
            
            binarySearch(arr,mid+1,r)
        
        elif(arr[mid]<mid):
            binarySearch(arr,l,mid-1)
    
    else:
        return -1

arr = [-1, 0, 1, 2, 4, 10]

print(binarySearch(arr,0,len(arr)-1))
    