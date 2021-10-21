#include <iostream>
#include <string>
using namespace std;

class Integer
{
    int data;

public:
    Integer(int data) { this->data = data; }
    Integer(string str) { this->data = stoi(str); }
    int get() { return data; }
    void set(int data) { this->data = data; }
    bool isEven() { return true; }
};

int main()
{
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}