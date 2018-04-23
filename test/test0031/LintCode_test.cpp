/*
 * =====================================================================================
 *
 *       Filename:  LintCode_test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/23/2018 11:55:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Charles Chiu (), charles.r.chiu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include "LintCode0031_partitionArray.hpp"
#include "lintcode.hpp"

int main()
{
    vector<int> nums;
    Solution so;
    int n,k;
    cin>>n>>k;
    nums.reserve(n);
    int tmp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        nums.push_back(tmp);
    }
    int ret = so.partitionArray(nums,k);
    cout << ret <<endl;
    for(auto ele : nums)
    {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}
