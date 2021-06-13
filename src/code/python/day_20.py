#!/bin/python3
import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input().strip())
    a = list(map(int, input().rstrip().split()))
    numberOfSwaps = 0;
    for i in range(n):
        for j in range(n-1):
            if a[j] > a[j + 1]:
                temp = a[j + 1]
                a[j + 1] = a[j]
                a[j] = temp
                numberOfSwaps += 1        
        if numberOfSwaps == 0 : break

print("Array is sorted in {} swaps.\nFirst Element: {}\nLast Element: {}\n".format(numberOfSwaps,a[0],a[n-1]))