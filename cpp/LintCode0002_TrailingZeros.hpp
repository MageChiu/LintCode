/*
 * =====================================================================================
 *
 *       Filename:  LintCode0002_TrailingZeros.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年04月13日 02时19分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Charles Chiu (), charles.r.chiu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        long long sum = 0;
        long long k = n;
        while(k>0)
        {
            k = k/5;
            sum += k;
        }
        return sum;
    }
};


