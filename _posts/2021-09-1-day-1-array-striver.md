---
title: "Day 1 | Array | Striver"
author: Priyashu Tiwari
date: 2021-09-1 10:00:00 +0530
categories: [striver]
tags: [striver, array, kadane]
---



## Problem 1

* [Find the duplicate in an array of N+1 integers.](https://leetcode.com/problems/find-the-duplicate-number/)

### Brute

* Just apply mergesort
* Time Complexity : **O(nlogn)**
* Space Complexity : **O(n)**

### Better 

* Count the occurences of 0,1,2 in first transversal and update the array in the second.
* Time Complexity : **O(n)** 
* Space Complexity : **O(1)**

```cpp

```

### Optimal

* Use three variable pointing to and 
* Time Complexity : **O(n)**
* Space Complexity : **O(1)**

```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
        
    }
};
```

## Problem 2

* [Sort an array of 0’s 1’s 2’s without using extra space or sorting algo ](https://leetcode.com/problems/sort-colors/)

### Brute

* Just apply mergesort
* Time Complexity : **O(nlogn)**
* Space Complexity : **O(n)**

### Better 

* Count the occurences of **0**,**1**,**2** in first transversal and update the array in the second.
* Time Complexity : **O(n)** 
* Space Complexity : **O(1)**

```cpp
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int zeros = 0, ones = 0, twos = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zeros++;
            }
            else if (a[i] == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
        }
        int i = 0;
        while (zeros > 0)
        {
            a[i++] = 0;
            zeros--;
        }
        while (ones > 0)
        {
            a[i++] = 1;
            ones--;
        }
        while (twos > 0)
        {
            a[i++] = 2;
            twos--;
        }
    }
};
```

### Optimal

* Use three variable pointing to and 
* Time Complexity : **O(n)**
* Space Complexity : **O(1)**

```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
        
    }
};
```


## Problem 3

* [Find the repeating and the missing](https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/)

### Brute 

* Apply mergesort and then find the missing and repeating value.
* Time Complexity : **O(nlogn)**
* Space Complexity : **O(n)**

### Better 

* Use a hash array or hash map to count the occurrences of numbers.Index with values '2' and '0' will give the repeating and missing numbers respectively.
* Time Complexity : **O(n)** 
* Space Complexity : **O(n)**

```cpp
class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {

        static int ar[2];
        int index[n] = {0};

        for (int i = 0; i < n; i++)
        {
            index[arr[i] - 1]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (index[i] > 1)
            {
                ar[0] = i + 1;
            }
            if (index[i] < 1)
            {
                ar[1] = i + 1;
            }
        }

        return ar;
    }
};

```

### Better

* Use three variable pointing to and 
* Time Complexity : **O(n)** 
* Space Complexity : **O(1)**

```cpp
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
    
    static int ar[2];  
    for (int i = 0; i < n; i++)
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            ar[0] = abs(arr[i]) ;
    
 
    for (int i = 0; i < n; i++) 
        if (arr[i] > 0)
            ar[1] = (i + 1);
    
    return ar;
    }
};
```

### Optimal

* Use three variable pointing to and 
* Time Complexity : **O(n)** 
* Space Complexity : **O(1)**

```cpp
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
    
    
    }
};
```

## Problem 4

* [Find the repeating and the missing](https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/)

### Brute 

* Swap all the smaller numbers from the second array and then sort both the resultant arrays.
* Time Complexity : **O(nlogn)**
* Space Complexity : **O(n)**

```cpp
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            
        int i=n-1, j = 0;
        while(i>=0 && j<m)
        { 
        if(arr1[i] > arr2[j])
        swap(arr1[i--] , arr2[j++]);
        else
        i--;
        }
        
        sort(arr1 , arr1+n);
        sort(arr2 , arr2+m);
        
        } 
};
```

### Better 

* Use **inserstion sort**.
* Time Complexity : **O(n)** 
* Space Complexity : **O(n)**

```cpp
class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {

        static int ar[2];
        int index[n] = {0};

        for (int i = 0; i < n; i++)
        {
            index[arr[i] - 1]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (index[i] > 1)
            {
                ar[0] = i + 1;
            }
            if (index[i] < 1)
            {
                ar[1] = i + 1;
            }
        }

        return ar;
    }
};

```

### Optimal

* Use three variable pointing to and 
* Time Complexity : **O(n)** 
* Space Complexity : **O(1)**

```cpp
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
    
    
    }
};
```

## Problem 5

* [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

### Brute

* Use two loop and compare the sum of evey subarray.
* Time Complexity : **O(n^2)**
* Space Complexity : **O(n)**

```cpp
class Solution
{
public:
    void maxProfit(vector<int>& prices)
  {
          for (int i = 0; i < prices.size() - 1; i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                int profit = prices[j] - prices[i];
                if (profit > maxprofit)
                    maxprofit = profit;
            }
        }
        return maxprofit;
  }
};
```

### Optimal

* Use [Kadane Algorithm](https://cp-algorithms.com/others/maximum_average_segment.html)
* Time Complexity : **O(n)**
* Space Complexity : **O(1)**

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, n =  prices.size(), profit = 0;
        for (auto price : prices)
        {
            if (price < buy) buy = price;
            if (price - buy > profit) profit = price - buy;
        }
        return profit;
    }
};
```
