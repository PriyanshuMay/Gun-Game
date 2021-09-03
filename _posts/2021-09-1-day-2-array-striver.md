---
title: "Day 2 | Array | Striver"
author: Priyashu Tiwari
date: 2021-09-2 10:00:00 +0530
categories: [striver]
tags: [striver, array]
math: true
---


## Problem 1

* [Find the duplicate in an array of N+1 integers.](https://leetcode.com/problems/find-the-duplicate-number/)

### Brute

* This question has been updated on leetcode with newer constraints : _-2^31 <= matrix[i][j] <= 2^31 - 1_. Hence, we will have to use some extra space.

### Better

* We will first iterate over the matrix and store the indices of all the zero element, then iterate over it once again to set the required rows & cols to zero.
* Time Complexity : **O(m*n)**
* Space Complexity : **O(m+n)**

```cp
class Solution {
public:
    
    void nullify(vector<vector<int>>& matrix, int a, int b, int r, int c){
        
        for (int i = 0; i < a; i++)
        {
            matrix[i][c] = 0;
        }

        for (int i = 0; i < b; i++)
        {
            matrix[r][i] = 0;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int, int>> indexes;
        pair<int, int> index;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    index.first = i;
                    index.second = j;
                    indexes.push_back(index);
                }
            }
        }

        for (auto e : indexes)
        {
            nullify(matrix, m, n, e.first, e.second);
        }
        
    }
};
```

### Optimal 

* This is same as above we will now use the first row an col to mark store the indices and one extra boolean for the zeroth col.
* Time Complexity : **O(m*n)** 
* Space Complexity : **O(1)**

```cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool zeroth_col = false;
        for (int j = 0; j < rows; ++j) {
            if (matrix[j][0] == 0) zeroth_col = true;
            for (int i = 1; i < cols; ++i) {
                if (matrix[j][i] == 0) {
                    matrix[j][0] = matrix[0][i] = 0;
                }
            }
        }
        for (int j = rows - 1; j >= 0; --j) {
            for (int i = cols - 1; i > 0; --i) {
                if (matrix[j][0] == 0 || matrix[0][i] == 0) matrix[j][i] = 0;
            }
            if (zeroth_col) matrix[j][0] = 0;
        }
    }
};
```