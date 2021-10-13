#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    char c = 69;
    float f = 12.3;

    cout << "i의 주소: " << &i << endl;
    cout << "c의 주소: " << &c << endl;
    cout << "f의 주소: " << &f << endl;
}