/*
 * =====================================================================================
 *
 *       Filename:  lintcode.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年04月23日 21时44分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Charles Chiu (), charles.r.chiu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#ifndef __LINT_CODE_HPP__
#define __LINT_CODE_HPP__


#include <iostream>
#include <chrono>
#include <stdio.h>
#include <string>

class ChiuTime{
private:
    std::chrono::system_clock::time_point pre_rec;
    std::chrono::system_clock::time_point cur_rec;
    int print_time()
    {
        std::time_t dur =  std::chrono::system_clock::to_time_t(this->cur_rec) - std::chrono::system_clock::to_time_t(this->pre_rec);
        if(this->rec_name.size()>0)
        {
            std::cout << this->rec_name << "|";
        }
        printf("dur [%ld]\n",dur);
    }
    std::string rec_name;
public:
    ChiuTime() {}
    ChiuTime(const char* str) : rec_name(str) {}
    ChiuTime(const std::string& str) : rec_name(str) {}
    int start(){
        //
        this->pre_rec = std::chrono::system_clock::now();
    }
    int end(){
        this->cur_rec = std::chrono::system_clock::now();
        print_time();
    }
    int get_run_time(){
        this->pre_rec = this->cur_rec;
        this->cur_rec = std::chrono::system_clock::now();
        print_time();
    }
};



#endif //__LINT_CODE_HPP__


