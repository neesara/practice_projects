#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Feb 17 11:16:29 2019

@author: neethu

String - Find the number of occurance of each letter in a string
"""


str1="nenernenr"
while len(str1)!=0:
    print("OCcurrence of {} is {}".format(str1[0],str1.count(str1[0])))
    str1=str1.replace(str1[0],'')
     

