//
//  Problem1_2_Solver.cpp
//  PracticeCoding
//
//  Created by 日鼻 旬 on 2014/01/03.
//  Copyright (c) 2014年 Jun Kusahana. All rights reserved.
//

#include "Problem1_2_Solver.h"


void reverse_str(char* str) {
    char *end = str;
    char tmp;
    
    if (str) {
        while (*end) {
            ++end;
        }
        --end;
    
        //逆転
        while (str < end) {
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}
