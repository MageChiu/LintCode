/*
 * =====================================================================================
 *
 *       Filename:  LintCode_test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/24/2018 01:00:41 AM
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
#include "LintCode0046_majorityNumber.hpp"
#include "lintcode.hpp"

int main()
{
    vector<int> nums;
    int tmp;
    while(cin>>tmp)
    {
        nums.push_back(tmp);
    }
    Solution so;
    cout << so.majorityNumber(nums) << endl;
    return 0;
}