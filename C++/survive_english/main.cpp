#include <iostream>
using namespace std;

void f(char str = ' ', int l = 1){
    for(int i = 0;i<l;i++){
        for(int j = 0; j<10; j++){
            cout << str;
        }
        cout << endl;
    }
}

int main(){
    f();
    f('%');
    f('@', 5);
}