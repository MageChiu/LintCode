/*
 * =====================================================================================
 *
 *       Filename:  LintCode0031_partitionArray.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/23/2018 11:50:05 PM
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
