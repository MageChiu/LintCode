# 31. partitionArray 数组划分

## 题目链接
[lintcode 31 partitionArray 数组划分](https://www.lintcode.com/zh-cn/problem/partition-array/#)
## 题目描述
给出一个整数数组 nums 和一个整数 k。划分数组（即移动数组 nums 中的元素），使得：

所有小于k的元素移到左边
所有大于等于k的元素移到右边
返回数组划分的位置，即数组中第一个位置 i，满足 nums[i] 大于等于 k。
1. 注意事项  
你应该真正的划分数组 nums，而不仅仅只是计算比 k 小的整数数，如果数组 nums 中的所有元素都比 k 小，则返回 nums.length。

2. 样例  
给出数组 nums = [3,2,2,1] 和 k = 2，返回 1.

3. 挑战  
使用 O(n) 的时间复杂度在数组上进行划分。

## 分析
简单来说就是快排跑一圈

## 代码
[github]()
``` cpp
```