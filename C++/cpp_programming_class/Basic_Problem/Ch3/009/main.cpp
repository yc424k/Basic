#include <iostream>
using namespace std;

class Oval
{
    int width, height;

public:
    Oval();
    Oval(int, int);
    ~Oval();
    int getWidth() { return width; }
    int getHeight() { return height; }
    void show() { cout << "width = " << width << ", "
                       << "height = " << height << endl; }
    void set(int, int);
};

Oval::Oval() : Oval(1, 1) {}
Oval::Oval(int w, int h)
{
    width = w;
    height = h;
}
Oval::~Oval()
{
    cout << "Oval 소멸 : "
         << "width = " << width << "height = " << height << endl;
}
void Oval::set(int w, int h)
{
    width = w;
    height = h;
}

int main()
{
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}