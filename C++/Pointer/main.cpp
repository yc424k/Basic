// Pointer
// - 변수를 가르키는 변수
// - 메모리 주소를 가리키는 변수
// - 메모리 주소를 저장하고 있는 변수

#include <iostream>
#include <stdlib.h>
#include <array>
#include <vector>
using namespace std;

union Union
{
    int i;
    float f;
    double d;
};

struct Person
{
    float weight;
    float height;
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
// 포인터 조심해야 되는 점
#if 0
    for (int i = 0; i < 3; i++)
    {
        // int num = 0;
        static int num = 0; // 정적 메모리 할당으로 변함
        ++num;
        cout << num << endl;
    }

    int *pNum0 = new int(123); // heap 메모리에 할당됨, heap 영역에 있는 변수는 이름이 없음
    int *pNum1 = pNum0;
    cout << *pNum0 << endl;
    delete pNum0; // 해제를 해주지 않으면 메모리에 계속 남아 있음

    // cout << *pNum0 << endl; // 에러를 발생 시킬 수 있음
    // cout << *pNum1 << endl; // 에러를 발생 시킬 수 있음
    // delete pNum0 // 에러를 발생 시킬 수 있음
    // {
    //     int n = 10;
    //     pNum0 = &n;
    // }
    // 위에 같은 경우들을 조심 해야됨
#endif

// 배열 동적 할당
#if 0
    int s;
    cin >> s;
    // int arr[s]{1, 2, 3};
    // 기존에는 위와 같은 방법으로 배열 할당이 불가능함
    int *arr = new int[s]{};
    arr[0] = 1;
    cout << arr[0] << endl;
    delete[] arr; // 동적 배열을 해제하는 방법

    Person *person0 = new Person{};
    cout << person0->height << endl;
    cout << (*person0).weight << endl;
    delete person0;

    cout << endl;
    Person *person1[2]{
        new Person{56.f, 172.3f},
        new Person{16.f, 111.1f}};

    for (Person *person : person1)
    {
        person->weight = 0.0f;
    }
    cout << endl;
    for (Person *person : person1)
    {
        cout << person->weight << endl;
    }
#endif

// nullptr
#if 0
    int *p = nullptr;
    // int *p = NULL; // c++ 11 이전에 사용하던 방법
#endif
// void *
#if 0
    int num = 10;
    int *p = &num;
    cout << *p << endl;

    void *vp = p; // 어떤 형태든 void 포인터로 변환이 가능함

    int *p0 = (int *)vp; // void 포인터는 형변환이 가능함
    // cout << *vp < endl; // void포인터를 해당 데이터를 어떻게 다뤄야 하는지 모르기 때문에 값 출력은 못함
    cout << *p0 << endl;

    // void * 사용 예시
    int *P = (int *)malloc(sizeof(int) * 3); // malloc의 경우 어떤 타입이 들어올지 모르기 때문에 void 그리고 int *로 형변환
    free(P);
#endif
#if 1
    // int s;
    // cin >> s;
    // arr<int, s> arr1{};
    // 배열의 크기를 입력받는 방식은 불가능
    // array<int, 5> arr{1, 2, 3};
    // for (int i : arr)
    // {
    //     cout << i << endl;
    // }

    vector<int> vec(5, 2); // 초기화를 안해줘도 0으로 초기화 해줌
    for (int num : vec)
    {
        cout << num << endl;
    }

    vec.resize(3); // 사이즈 변경도 가능함
    vec.resize(10, 2);
    for (int num : vec)
    {
        cout << num << endl;
    }

    cout << vec.size() << endl;
    vec.push_back(10);
    cout << vec.size() << endl;
    vec.pop_back();
    cout << vec.size() << endl;

    // 벡터가 동적할당하는 코드
    vector<int> vec0;
    for (int i = 0; i < 100; i++)
    {
        vec.push_back(i);
        cout << vec.size() << endl;
        cout << vec.data() << endl;
    }

    vector<int> vec1{1, 2, 3};
    vector<int> vec2{3, 2, 1};
    cout << vec1.front() << endl;
    cout << vec1.back() << endl;
    vec1.swap(vec2);

    for (int i : vec1)
    {
        cout << i;
    }
    cout << endl;

    for (int i : vec2)
    {
        cout << i;
    }
    cout << endl;

    vector<int> vec3;
    vec3 = vec1;
    for (int i : vec3)
    {
        cout << i;
    }
    cout << endl;
#endif
}