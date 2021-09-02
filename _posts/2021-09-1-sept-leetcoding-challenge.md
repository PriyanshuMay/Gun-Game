---
title: "Sept | Leetcoding Challenge"
author: Priyashu Tiwari
date: 2021-09-1 20:00:00 +0530
categories: [leetcode]
tags: [leetcode, sept]
---


## 1 Sept | Array Nesting

* We can use the fact that every element in the given array is greater than 0.So we transverse the whole array and change the visited index to -1.
* Time Complexity : **O(n)** 
* Space Complexity : **O(1)**

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