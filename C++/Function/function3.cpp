// 포인터를 통한 함수 값 전달
#include <iostream>

using namespace std;

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int func(int nums[4])
{
    cout << typeid(nums).name() << endl;

    // nums는 포인터이기 때문에 사이즈에 대한 정보가 없어서 range 반복문 실행을 못함
    // for(int num : nums)
    // {
    //     cout << num << endl;
    // }
}
int main()
{
    // 포인터 복습
    //     int x = 10;
    //     int *px = &x;

    //     cout << x << endl;
    //     cout << px << endl;
    //     cout << *px << endl;

    //     x = 20;
    //     cout << x << endl;
    //     cout << *px << endl;

    //     *px = 30;
    //     cout << x << endl;
    //     cout << *px << endl;
    //
    int x = 10, y = 20;
    cout << x << endl;
    cout << y << endl;

    swap(&x, &y);
    // int *px = &x;
    // int *py = &y;

    // int temp = *px;

    // *px = *py;
    // *py = temp;

    cout << x << endl;
    cout << y << endl;

    // 포인터 전달 예시 함수 scanf
    int nums[4] = {1, 2, 3, 4};
    func(nums);
}
// const datatype * name을 사용할 경우 포인터를 사용하지만 값을 바꾸지 않는 다는것을 알려 줄수 있음