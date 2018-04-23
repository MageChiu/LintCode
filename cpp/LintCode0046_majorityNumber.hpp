/*
 * =====================================================================================
 *
 *       Filename:  LintCode0046_majorityNumber.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/24/2018 12:53:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Charles Chiu (), charles.r.chiu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>
#include <iostream>
using namespace std;

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
