for i in range(int(input())):
    n, k = [int(x) for x in input().split()]
    if (k | (k - 1)) > n: print(k - 2)
    else: print(k - 1)