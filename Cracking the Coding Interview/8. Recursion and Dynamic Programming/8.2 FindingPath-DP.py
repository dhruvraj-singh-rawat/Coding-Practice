#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Sep  8 09:34:00 2019

@author: dhruvrajrawat
"""


arr=[[0,0,0],[0,'X',0],[0,0,0],[0,0,0]]

def numWays(arr):
    arr[0][0]=1 ## As it starts from this position
    for i in range(1,len(arr)):
        if (arr[i][0]=='X'):
            break
        arr[i][0]=arr[i-1][0]
    
    for j in range(1,len(arr[0])):
        if(arr[0][j]=='X'):
            break
        arr[0][j]=arr[0][j-1]
    
    for i in range(1,len(arr)):
        for j in range(1,len(arr[0])):
            if (arr[i][j] !='X'):
                
            
                if(arr[i-1][j]=='X'):                
                    arr[i][j]=arr[i][j-1] # Carry Value only from the Top
                elif(arr[i][j-1]=='X'):
                    arr[i][j]=arr[i-1][j] # Carry Value only from the Right
                else:
                    arr[i][j]=arr[i-1][j]+arr[i][j-1]
            
        
    
    return arr[-1][-1]

print ('The Number of Ways to reach the Bottom-Right is: ',numWays(arr))
    