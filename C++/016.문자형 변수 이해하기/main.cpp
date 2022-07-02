#include <iostream>

using namespace std;

int main(){
    char ch1 = 'c';
    char ch2 = 200;

    unsigned char ch3 = 'c';
    unsigned char ch4 = 200;

    printf("%c %d\n", ch1, ch1);
    printf("%c %d\n", ch2, ch2);
    // -127에서 72(128 - 200, 보수를 취함)증가한 -56이 출력
    printf("%c %d\n", ch3, ch3);
    printf("%c %d\n", ch4, ch4);
}