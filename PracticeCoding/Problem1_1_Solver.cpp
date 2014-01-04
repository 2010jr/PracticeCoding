//
//  Probrem1_1_Solver.cpp
//  PracticeCoding
//
//  Created by 日鼻 旬 on 2014/01/03.
//  Copyright (c) 2014年 Jun Kusahana. All rights reserved.
//

#include "Problem1_1_Solver.h"

using namespace std;

bool has_duplication_by_array(string str) {
    //文字コードの配列を用意
    int char_array[256] = {};
    
    char * input_char_array = new char [str.length() + 1];
    std::strcpy(input_char_array, str.c_str());
    //文字列最後のNullPointerを考慮
    for(int i = 0 ; i < str.length() ; i++) {
        char char1 = input_char_array[i];
        int index = char1;
        if (char_array[index]) {
            delete[] input_char_array;
            return true;
        } else {
            char_array[index] = 1;
        }
    }
    delete[] input_char_array;
    return false;
}