//
// Created by YouBlue on 2023/02/09.
//

#ifndef STATIC_MEMBER_PERSON_H
#define STATIC_MEMBER_PERSON_H


class Person {
private:
    static int num;
    static const int num1 = 0 ; // const는 inline 초기화 가능
    int n;
public:
    Person();
    static void print();
};


#endif //STATIC_MEMBER_PERSON_H
