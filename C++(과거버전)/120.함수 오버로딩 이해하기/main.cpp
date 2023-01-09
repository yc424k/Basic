#include <iostream>
#include <string>

using namespace std;

int Plus(int arg1, int arg2)
{
    return arg1 + arg2;
}

double Plus(double arg1, double arg2, double arg3)
{
    return arg1 + arg2 + arg3;
}

int main()
{
    int number1 = Plus(2, 4);
    double number2 = Plus(3.4, 1.1, 2.2);

    cout << number1 << endl;
    cout << number2 << endl;

    return 0;
}