/*
 * =====================================================================================
 *
 *       Filename:  LintCode0081_medianII.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/24/2018 01:48:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Charles Chiu (), charles.r.chiu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <queue>
#include <iostream>
using namespace std;

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