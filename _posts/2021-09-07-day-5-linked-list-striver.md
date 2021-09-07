---
title: "Day  |  | Striver"
author: Priyashu Tiwari
date: 2021-09- 10:00:00 +0530
categories: [striver]
tags: [striver,]
---


## Problem 1

* [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

### Brute / Better / Optimal


* Just use two temp variables, one to store the prev node and another store the current node.
* Time Complexity : **O(n)**
* Space Complexity : **O(1)**

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* next) {
        ListNode* prev = NULL;
        while(next != NULL)
        {
            ListNode* curr = next;
            next = next->next;
            curr->next = prev;
            prev = curr;
        }
        return prev;
    }
};
```


## Problem 2

* []()

### Brute

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```

### Better 

* 
* Time Complexity : **O()** 
* Space Complexity : **O()**

```cpp

```

### Optimal

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```


## Problem 3

* []()

### Brute

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```

### Better 

* 
* Time Complexity : **O()** 
* Space Complexity : **O()**

```cpp

```

### Optimal

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```


## Problem 4

* []()

### Brute

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```

### Better 

* 
* Time Complexity : **O()** 
* Space Complexity : **O()**

```cpp

```

### Optimal

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```


## Problem 5

* []()

### Brute

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```

### Better 

* 
* Time Complexity : **O()** 
* Space Complexity : **O()**

```cpp

```

### Optimal

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```


## Problem 6

* []()

### Brute

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```

### Better 

* 
* Time Complexity : **O()** 
* Space Complexity : **O()**

```cpp

```

### Optimal

* 
* Time Complexity : **O()**
* Space Complexity : **O()**

```cpp

```