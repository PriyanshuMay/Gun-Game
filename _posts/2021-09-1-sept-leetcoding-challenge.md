---
title: "Sept | Leetcoding Challenge"
author: Priyashu Tiwari
date: 2021-09-1 20:00:00 +0530
categories: [leetcode]
tags: [leetcode, sept]
---


## 1 Sept | Array Nesting

* We can use the fact that every element in the given array is greater than 0.So we transverse the whole array and change the visited index to -1.

```cpp
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != -1) {
                int start = nums[i], count = 0;
                while (nums[start] != -1) {
                    int tmp = start;
                    start = nums[start];
                    nums[tmp] = -1;
                    count++;
                }
                ans = max(ans, count);
            }
        }
        return ans;   
    }
};
```

## 2 Sept | Unique Binary Search Trees II

* We can create a helper function ``dfs`` which can then recursivley find all the smaller BSTs and append all these BSTs into a vector. This problem is an application of [Catalan Numbers](https://cp-algorithms.com/combinatorics/catalan-numbers.html).

```cpp
class Solution {
public:
    vector<TreeNode*> dfs(int start, int end){
         vector<TreeNode*> vec;
        if (start > end) return {NULL};
        if (start == end) return {new TreeNode(start)};
        
        for (int i = start; i <= end; i++) {
            vector<TreeNode*> left = dfs(start, i-1);
            vector<TreeNode*> right = dfs(i+1, end);
            
            for (auto l : left)
                for (auto r : right)
                    vec.push_back(new TreeNode(i, l, r));
        }
        return vec;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return dfs(1, n);
    }
};
```

## 3 Sept | Erect the Fence

* Really leetcode? this question in this challenge.
