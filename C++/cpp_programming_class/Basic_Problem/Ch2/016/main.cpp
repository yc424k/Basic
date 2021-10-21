#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int num = 0;
    int alphabet[27] = { 0 };
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    char alpha[10000];
    cin.getline(alpha, 10000, ';');
    for (int i = 0; i<strlen(alpha); ++i) {
        if (isalpha(tolower(alpha[i])) != 0) {
            ++alphabet[alpha[i] - 97];
            ++num;
        }
    }
    cout << "총 알파벳 수 " << num << endl;
    for (int i = 0; i < 26; ++i) {
        char asc = i + 'a';
        cout << asc << "(" << alphabet[i] << ")";
        for (int j = 0; j <4 - alphabet[i] / 10; ++j)
            cout << " ";
        cout << ":  ";
        for (int j = 1; j <= alphabet[i]; ++j)
            cout << "*";
        cout << endl;
    }
}