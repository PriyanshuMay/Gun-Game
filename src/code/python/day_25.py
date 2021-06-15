import math

def ifPrime(number):
    if number == 1: return False
    for i in range(2, int(math.sqrt(number)) + 1): 
        if number % i == 0: return False
    return True

for _ in range(int(input())):
    if ifPrime(int(input())): print("Prime")
    else: print("Not prime")