// Pointer
// - 변수를 가르키는 변수
// - 메모리 주소를 가리키는 변수
// - 메모리 주소를 저장하고 있는 변수

#include <iostream>

using namespace std;

union Union
{
    int i;
    float f;
    double d;
};

int main()
{
// 포인터 기초
#if 0
    int num = 147;
    // 포인터 선언
    // 가리킬 타입에 * 선언
    // &연산자를 사용하여 num의 주소값을 얻음
    int *pointer = &num;

    cout << num << endl;
    cout << &num << endl;
    // cout << pointer << endl;
    cout << *pointer << endl;

    // 역차좀 한 값을 바꾸면 값이 바뀜
    *pointer = 100;
    cout << num << endl;

    // 포인터가 아무것도 가르키고 있지 않을 때
    int *pNum0;
    cout << pNum0 << endl;
#endif

// 포인터 데이터 타입 이해
#if 0
    Union u;
    int *ip = (int *)&u;
    float *fp = (float *)&u;
    double *dp = (double *)&u;

    u.i = 1;

    cout << u.i << endl;
    cout << *ip << endl; // 메모리를 int로 해석

    cout << u.f << endl;
    cout << *fp << endl; // 메모리를 float로 해석

    cout << u.d << endl;
    cout << *dp << endl; // 메모리를 double로 해석
#endif

// 포인터 상수
#if 0 
    int num0 = 10;
    const int *pNum0 = &num0;

    int num1 = 20;
    pNum0 = &num1; // 가르키는 주소를 바꾸는건 가능
    //*pNum0 = 30; // 가르키는 값을 바꿀 수는 없음

    int *const pNum1 = &num0;
    // pNum1 = &num1 // 가르키는 주소를 바꾸는건 불가능
    *pNum1 = 30; // 가르키는 값을 바꿀수 있음

    const int *const pNum3 = &num0; // 가르키는 값과 주소를 바꿀수 없음
#endif

// 배열과 포인터 관계
#if 0
    int nums[] = {1, 2, 3};
    cout << nums << endl; // 주소가 출력됨
    int *pNums = nums;    // 배열은 포인터로 변환할 수 있음, 배열의 0번째 주소를 return 함

    cout << sizeof(nums) << endl;
    cout << sizeof(pNums) << endl; // 64비트 환경이기 때문에 8이 출력됨

    cout << nums << endl;  // int가 3개인 배열 타입
    cout << &nums << endl; // int가 3개인 배열의 포인터 타입
    cout << &nums[0] << endl;

    // 포인터에 대괄호 연산자를 사용할 수 있음
    cout << pNums[0] << endl;
    cout << pNums[1] << endl;
    cout << pNums[2] << endl;

    cout << pNums << endl;
    cout << pNums + 1 << endl;
    cout << pNums + 2 << endl;

    cout << *(pNums) << endl;
    cout << *(pNums + 1) << endl;
    cout << *(pNums + 2) << endl;

    cout << endl;

    cout << *nums << endl;
    cout << *(nums + 1) << endl;
    cout << *(nums + 2) << endl;

    cout << endl;

    cout << *pNums << endl;
    pNums++;
    cout << *pNums << endl;
#endif
// 포인터와 문자열의 관계
#if 0
    char str0[] = "abcd";
    char *str1 = str0;

    cout << str0 << endl;
    cout << str1 << endl;

    const char *str2 = "hello";
    cout << str2 << endl;
    cout << typeid("hello").name() << endl;
#endif
}