#include <iostream>
#include <cstring>
using namespace std;
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);
int rem(int a, int b);
int main() {
    char text[100];
    char *ptr = NULL;
    int left, right;
    for (;;) {
        cout << "? ";
        cin.getline(text, 100);
        left = atoi(strtok(text, " "));
        ptr = strtok(NULL, " ");
        right = atoi(strtok(NULL, " "));
        if (*ptr == '+') {
            cout << left << ' ' << ptr << ' ' << right << " = " << add(left, right) << endl;
        }
        else if (*ptr == '-') {
            cout << left << ' ' << ptr << ' ' << right << " = " << sub(left, right) << endl;
        }
        else if (*ptr == '*') {
            cout << left << ' ' << ptr << ' ' << right << " = " << mul(left, right) << endl;
        }
        else if (*ptr == '/') {
            cout << left << ' ' << ptr << ' ' << right << " = " << divi(left, right) << endl;
        }
        else if (*ptr == '%') {
            cout << left << ' ' << ptr << ' ' << right << " = " << rem(left, right) << endl;
        }
        else
            cout << "입력이상" << endl;
    }
}
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divi(int a, int b) {
    return a / b;
}
int rem(int a, int b) {
    return a % b;
}