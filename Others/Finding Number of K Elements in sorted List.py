#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Sep  8 22:13:30 2019

@author: dhruvrajrawat
"""
import math
arr = [1,2,2,2,3,4,4,4,4,5]


'''
    l:left
    r:right
    k:Element to search
    pos: Current Position where 'k' element is found
    mode: Left/Right

'''
def binarySearch(arr,l,r,k,pos,mode):
    
    if(l<=r):
        mid = math.floor(l+(r-l)/2)
        #print (mid)
        
        if(arr[mid]==k):
            #print(mid)
            pos=mid
            if(mode=="left"):               
            
                mid = binarySearch(arr,l,mid-1,k,pos,mode)
            else:
                mid = binarySearch(arr,mid+1,r,k,pos,mode)
                
            return mid   
        
        if(arr[mid]<k):
            mid=binarySearch(arr,mid+1,r,k,pos,mode)
        elif(arr[mid]>k):
            mid=binarySearch(arr,l,mid-1,k,pos,mode)
        
        return mid
    
    else:
        if (pos>0):
            return pos
        else:
            
            return -1


left_pos = binarySearch(arr,0,len(arr)-1,2,-1,"left")
if(left_pos==-1):
    print('The Element is not in the List')
else:
    right_pos = binarySearch(arr,0,len(arr)-1,2,-1,"right")
    
    print('Total Number of k elements in array is: ',(right_pos-left_pos)+1)
