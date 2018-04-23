/*
 * =====================================================================================
 *
 *       Filename:  LintCode_test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/24/2018 01:49:33 AM
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
#include "LintCode0081_medianII.hpp"
#include "lintcode.hpp"
#include <vector>

int main()
{
    Solution so;
    vector<int> nums;
    int tmp ;
    while(cin>>tmp)
    {
        nums.push_back(tmp);
    }
    vector<int> ret = so.medianII(nums);
    for(auto ele:ret)
    {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}