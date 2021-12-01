#include <iostream>
using namespace std;

class Power
{
    int kick;
    int punch;

public:
    Power(int kick = 0, int punch = 0){
        this->kick = kick;
        this->punch = punch;
    }
    void show();
    Power operator+ (int num);
};

void Power::show(){
    cout << "kick=" << kick <<',' <<"punch=" << punch << endl; 
}

Power Power::operator+(int num){
    kick = kick + num;
    punch = punch + num;
    return *this;
}

int main(){
    Power a(3,5), b;
    a.show();
    b.show();
    b = a + 2;
    a.show();
    b.show();
}