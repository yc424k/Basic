//#include "stdafx.h"
#include <iostream>
#include <string>
#include <type_traits>
#include <typeinfo>

using namespace std;

template <typename T1, typename T2>

string TmpFunc(T1 x, T2 y)
{
    cout << boolalpha;
    auto conditional<is_same<T1, T2>::value, int, double>::type type1;

    return typeid(type1).name();
}

int main()
{
    string type = TmpFunc(1, 22.3);

    if (type == "double")
        cout << "double �ڷ����Դϴ�." << endl;
    else
        cout << "double �ڷ����� �ƴմϴ�." << endl;

    return 0;
}