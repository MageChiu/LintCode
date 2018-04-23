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
[github](https://github.com/MageChiu/LintCode/blob/master/cpp/LintCode0031_partitionArray.hpp)
``` cpp
class Solution {
public:
    /**
     * @param nums: The integer array you should partition
     * @param k: An integer
     * @return: The index after partition
     */
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        int i,j;
        int n = nums.size();
        if(n==0) return 0;
        i = 0;
        j=n-1;
        while(i<j)
        {
            while(i<=j && nums[i]<k) i++;
            while(i<=j && nums[j]>=k) j--;
            if(i<j)
            {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
                i++;
                j--;
            }
        }
        return i;
    }
};
```
>[测试数据](https://github.com/MageChiu/LintCode/tree/master/test/test0031)



# 46. majorityNumber 主元素
## 题目链接
[LintCode 46 majorityNumber](https://www.lintcode.com/zh-cn/problem/majority-number/)
## 题目描述
给定一个整型数组，找出主元素，它在数组中的出现次数严格大于数组元素个数的二分之一。

1. 样例  
给出数组[1,1,1,1,2,2,2]，返回 1

2. 挑战  
要求时间复杂度为O(n)，空间复杂度为O(1)

## 分析
这个题目在编程之美上面讲过，可以利用一个数学上的知识，当一个数组中去掉了两个不相同数字，那么之前出现频率大于1/2的任然在剩余的数字中出现频率大于1/2


## 代码
[github](https://github.com/MageChiu/LintCode/blob/master/cpp/LintCode0046_majorityNumber.hpp)
``` cpp
class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if(n<=2) return nums[0];
        int j = n-1;
        int i = j-1;
        while(i>=j/2)
        {
            if(nums[i]!=nums[j])
            {
                if(i<=j-2)
                {
                    nums[i] = nums[j-1];
                    j-=2;
                }
                else
                {
                    j=i-1;
                    i=j;
                }
            }
            --i;
        }
        return nums[j];
    }
};
```

>[测试数据](https://github.com/MageChiu/LintCode/tree/master/test/test0046)



# 81. medianII 数据流中位数 
## 题目链接
[LintCode81. 数据流中位数 ](https://www.lintcode.com/zh-cn/problem/data-stream-median/)
## 题目描述

数字是不断进入数组的，在每次添加一个新的数进入数组的同时返回当前新数组的中位数。
 
1. 说明  
中位数的定义：  
中位数是排序后数组的中间值，如果有数组中有n个数，则中位数为A[(n-1)/2]。  
比如：数组A=[1,2,3]的中位数是2，数组A=[1,19]的中位数是1。  
2. 样例  
持续进入数组的数的列表为：[1, 2, 3, 4, 5]，则返回[1, 1, 2, 2, 3]  
持续进入数组的数的列表为：[4, 5, 1, 3, 2, 6, 0]，则返回 [4, 4, 4, 3, 3, 3, 3]  
持续进入数组的数的列表为：[2, 20, 100]，则返回[2, 2, 20]

3. 挑战   
时间复杂度为O(nlogn)

## 分析
这个比较涉及工程，直接使用两个优先级队列就行了。
## 代码
[github](https://github.com/MageChiu/LintCode/blob/master/cpp/LintCode0081_medianII.hpp)
``` cpp
class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: the median of numbers
     */
    vector<int> medianII(vector<int> &nums) {
        // write your code here
        priority_queue<int, vector<int>, less<int>> q1;
        priority_queue<int, vector<int>, greater<int>> q2;
        vector<int> ret_nums;
        ret_nums.reserve(nums.size());
        for(int i = 0 ; i < nums.size(); i++)
        {
            // cnt nums is i+1;
            if(q1.size() == q2.size())
            {
                q2.push(nums[i]);
                int tmp = q2.top();
                q2.pop();
                q1.push(tmp);
            }
            else
            {
                q1.push(nums[i]);
                int tmp = q1.top();
                q1.pop();
                q2.push(tmp);
            }
            ret_nums.push_back(q1.top());
        }
        return  ret_nums;
    }
};
```
>[测试数据](https://github.com/MageChiu/LintCode/tree/master/test/test0081)