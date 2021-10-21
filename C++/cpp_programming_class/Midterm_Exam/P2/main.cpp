#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int a)
    {
        this->a = a;
        b = 0;
    }
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void Show()
    {
        if (a == 0 && b == 0)
            cout << "( 0 )" << endl;
        else if (a != 0 && b == 0)
            cout << "( " << a << " )" << endl;
        else if (a == 0 && b != 0)
            cout << "( " << b << "i )" << endl;
        else if (b > 0)
            cout << "( " << a << "+" << b << "i )" << endl;
        else
            cout << "( " << a << b << "i )" << endl;
    }
};

int main(void)
{
    Complex u(12, 34);
    Complex v(56, -78);
    Complex x(90);
    Complex y(0, 78);
    Complex z;

    u.Show();
    v.Show();
    x.Show();
    y.Show();
    z.Show();
}