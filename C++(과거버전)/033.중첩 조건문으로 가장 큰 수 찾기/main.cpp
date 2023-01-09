#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number1 = 100;
    int number2 = 200;
    int number3 = 300;

    if(number1 > number2 && number1 > number3)
        cout << number1 << endl;
    else if(number2 > number1 && number2 > number3)
        cout << number2 <<endl;
    else if(number3 > number1 && number3 > number1)
        cout << number3 << endl;
    else
        cout << "Error" << endl;
    
    return 0;
}