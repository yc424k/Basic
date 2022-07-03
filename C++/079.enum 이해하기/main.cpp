#include <iostream>

using namespace std;

// 각 요소는 이전 요소의 값보다 자동으로 1이 커짐
// enum의 요소들은 정구형 값을 가짐
enum Status
{
    normal = 0,
    abnormal, // 1
    disconnet = 100,
    close // 101
};

int main()
{
    Status number = close;

    if (number == Status::normal)
        cout << "Status : normal" << endl;
    else if(number == abnormal)
        cout << "Status : abnormal" << endl;
    else if (number == 101)
        cout << "Status : disconnect" << endl;
    else
        cout << "Status : close" << endl;
    
    return 0;
}