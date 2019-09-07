#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Sep  2 10:12:20 2019

@author: dhruvrajrawat
"""

# [8.2] Robot in a Grid: Imagine a robot sitting on the upper
# left corner of grid with r rows and c columns. The robot can
# only move in two directions, right and down, but certain
# cells are "off limits" such that the robot cannot step on
# them. Design an algorithm to find a path for the robot from
# the top left to the bottom right.


maze = [[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,'b',0,0]]



def maze_solver(maze,row,col):
    
    print(row,' ',col)
    
    if(row>len(maze)-1 and col>len(maze[0])-1):
        return
    if(row>len(maze)-1):
        return
    if(col>len(maze[0])-1):        
        return 
    
    if(maze[row][col]=='b'):
        return 
    
    maze[row][col] = maze[row][col]+1
    
    maze_solver(maze,row+1,col)
    maze_solver(maze,row,col+1)
    print('The value returned at last :',row,' - ',col)
 

maze_solver(maze,0,0)