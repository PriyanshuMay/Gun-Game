#!/bin/python3
import sys
import re

list = []
pattern = re.compile('@gmail.com$')

for _ in range(int(input())):
    name,email = input().strip().split(' ')
    if pattern.search(email): list.append(name)
    
list.sort()
for user in list:
    print(user)
    