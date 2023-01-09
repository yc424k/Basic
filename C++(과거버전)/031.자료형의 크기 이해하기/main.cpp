#include <iostream>

using namespace std;

class Temp{
    int no;
    bool is_no;
};

int main()
{
    cout << sizeof('a') << endl;
    cout << sizeof(1) << endl;
    cout << sizeof(1.1) << endl;
    cout << sizeof(Temp) << endl;

    return 0;
}