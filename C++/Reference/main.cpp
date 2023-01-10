#include <iostream>
#include <vector>
using namespace std;

// Reference -> 별칭
int main()
{
    int num0 = 10;
    int *num2 = &num0; // 포인터 방식
    int &num1 = num0;

    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;
    cout << endl;

    num0 = 20;
    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;
    cout << endl;

    num1 = 30;
    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;
    cout << endl;

    *num2 = 40;
    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;

    // 처음에만 누굴 Reference 할지 정할 수 있고 그 뒤로는 못 바꿈, 무조건 초기화를 해줘야 함
    int n = 50;
    num1 = n;
    cout << num0 << endl;

    vector<int> vec0;
    vector<int> &vec1 = vec0;
    vector<int> *vec2 = &vec0;

    vec0.push_back(1);
    vec1.push_back(2);
    vec2->push_back(3);

    for (int num : vec0)
    {
        cout << num << ' ';
    }
    cout << endl;

    // 주의할점
    int *Num0 = new int(12);
    int &Num1 = *Num0;

    cout << *Num0 << endl;
    cout << Num1 << endl;

    delete Num0;
    cout << Num1 << endl;

    // Reference는 내부적으로 포인터랑 같음
    // https://godbolt.org/
}