/*
 * =====================================================================================
 *
 *       Filename:  LintCode_test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年04月23日 21时19分14秒
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
#include "LintCode0002_TrailingZeros.hpp"
#include "lintcode.hpp"

using namespace std;

int main()
{
    long long n;
    Solution so;
    ChiuTime ct("LintCode0002_TrailingZeros");
    ct.start();
    while(cin>>n)
    {
        cout << so.trailingZeros(n) << endl;
    }
    this_thread::sleep_for(chrono::seconds(2));
    ct.end();
}

