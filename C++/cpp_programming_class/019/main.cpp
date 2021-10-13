//Call by Value

#include <iostream>
using namespace std;
void modify(int value){
    value = 99;
}

int main(){
    int number = 1;
    modify(number);
    cout << "number = "<<number << endl;

    return 0;
}