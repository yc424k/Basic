//
// Created by YouBlue on 2023/02/09.
//

#include "Person.h"
#include <iostream>

const int Person::num1 = 1;
int Person::num = 0; // 정의를 안해주면 에러 발생

Person::Person()
{
    num++;
//    num1++; // const라 증가 불가능
}
void Person::print()
{
//    std::cout << n << std::endl;
    std::cout << num << std::endl;
}
