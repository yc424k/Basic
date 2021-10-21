#include <iostream>
using namespace std;

//최대 공약수
int gcd(int a, int b)
{
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

//피보나치 수열
int fibonacci(int n)
{
    if (n < 2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

//문자열 길이 계산
int length(char *str)
{
    if (*str == '\0')
        return 0;
    else
        return 1 + length(str + 1);
}

//문자열을 출력
void printChars(char *str)
{
    if (*str == '\0')
        return;
    else
    {
        cout << *str;
        printChars(str + 1);
    }
}

//문자열을 거꾸로 출력
void printCharsReverse(char *str)
{
    if (*str == '\0')
        return;
    else
    {
        printCharsReverse(str + 1);
        cout << *str;
    }
}

//순차 탐색
int search(int data[], int n, int target)
{
    if (n <= 0)
        return -1;
    else if (target == data[n - 1])
        return n - 1;
    else
        return search(data, n - 1, target);
}

//최대값 찾기

int MAX(int a, int b)
{
    return a > b ? a : b;
}

//최대값 찾기
int findMax(int n, int data[])
{
    if (n == 1)
        return data[0];
    else
        return MAX(data[n - 1], findMax(n - 1, data));
}

//이진수 출력
void printBinary(int n)
{
    if (n < 2)
        cout << n;
    else
    {
        printBinary(n / 2);
        cout << n % 2;
    }
}

int main()
{
    cout << "최대공약수 구하는 프로그램 ";
    cout << gcd(9, 3) << endl;

    cout << "피보나치 수열 구하는 프로그램 ";
    cout << fibonacci(10) << endl;

    char a[] = "Hello World!";
    cout << "문자열 길이를 구하는 프로그램 ";
    cout << length(a) << endl;

    cout << "문자열을 출력하는 프로그램 ";
    printChars(a);
    cout << endl;

    cout << "문자열을 거꾸로 출력하는 프로그램 ";
    printCharsReverse(a);
    cout << endl;

    int data[10] = {1, 2, 3, 4, 13, 7, 8, 9, 10, 11};
    cout << "순차 탐색 프로그램 ";
    cout << search(data, 10, 6) << endl;
    cout << search(data, 10, 10) << endl;

    cout << "최대값 찾는 프로그램 ";
    cout << findMax(10, data) << endl;

    cout << "이진수 출력하는 프로그램 ";
    printBinary(1000);
    cout << endl;
}