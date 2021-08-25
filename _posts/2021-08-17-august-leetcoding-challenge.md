---
title: "August Leetcoding Challenge"
author: Priyashu Tiwari
date: 2021-08-25 18:33:00 +0530
categories: [Leetcode]
tags: [august, leetcoding, challenge]
---

## 24 August

The basic idea is to parse the string into real and imaginery part, multiply them and then convert the result into a string.

```cpp
class Solution {
public:
    pair<int, int> parse(string num) {
        int i = num.find('+');
        double real = stoi(num.substr(0, i));
        double img = stoi(num.substr(i+1, num.size()-i-2));
        pair<int, int> res(real, img);
        return res;
    }
    
    string complexNumberMultiply(string num1, string num2) {
        pair<int, int> a = parse(num1), b = parse(num2);
        int ra = a.first, ia = a.second, rb = b.first, ib = b.second;
        return to_string(ra * rb - ia * ib) + '+' + to_string(ra * ib  + rb * ia)+'i' ;
    }
};
```

