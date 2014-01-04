//
//  main.cpp
//  PracticeCoding
//
//  Created by 日鼻 旬 on 2014/01/03.
//  Copyright (c) 2014年 Jun Kusahana. All rights reserved.
//
#include "Problem1_1_Solver.h"
#include "Problem1_2_Solver.h"
#include <iostream>

int main(int argc, const char * argv[])
{
    
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::string input = "ゲット";
    
    bool has_duplication = has_duplication_by_array(input);
    std::string check_result;
    if (has_duplication) {
        check_result = "持っている";
    } else {
        check_result = "持っていない";
    }
    std::cout << input << " は重複した文字を" << check_result << std::endl;
    
    //Problem1-2
    
    std::cout << "start Problem1-2" << std::endl;
    
    char input_array[256] = "latex";
    char* input2 = input_array;
    
    reverse_str(input2);
    
    std::cout << input2 << std::endl;
    
    
    
    return 0;
}

