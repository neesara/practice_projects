#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Feb 17 09:36:05 2019

@author: neethu

Program to search a file for a string
"""

file=open('nee.txt','w')
x=['Hello Neethu\n','How are you\n','How do you do\n']
file.writelines(x)

file.close()

subs=input("Enter the substring:")
file=open('nee.txt','r')
for i in file.readlines():
   # if 'Nee' in i:
   if i.find(subs)!=-1:  
        print("Substring {} found in file {}".format(subs,'nee.txt'))
file.close()
    
    
    

