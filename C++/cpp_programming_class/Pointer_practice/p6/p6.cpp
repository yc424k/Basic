#include <iostream>
using namespace std;
class Circle
{
    int radius;
    string name;

public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};
void Circle::setCircle(string name, int radius)
{
    this->name = name;
    this->radius = radius;
}

double Circle ::getArea()
{
    return 3.14 * radius * radius;
}

string Circle ::getName()
{
    return name;
}

class CircleManager
{
    Circle *p;
    int size;

public:
    CircleManager(int size);
    ~CircleManager(){};
    void searchByName();
    void searchByArea();
};

CircleManager ::CircleManager(int size)
{
    this->size = size;
    p = new Circle[size];
    int radius;
    string name;
    for (int i = 0; i < size; i++)
    {
        cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);
    }
}

void CircleManager ::searchByName()
{
    string name;

    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> name;
    for (int i = 0; i < size; i++)
    {
        if (p[i].getName() == name)
        {
            cout << "도넛의 면적은 " << p[i].getArea() << endl;
            break;
        }
    }
}

void CircleManager ::searchByArea()
{
    int area=0;
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> area;
    cout << area << "보다 큰 원을 검색합니다." << endl;

    for (int i = 0; i < size; i++)
    {   
        if (p[i].getArea() > area)
        {
            cout << p[i].getName()<<"의 면적은 " <<p[i].getArea()<<", ";
        }
    }
    cout << endl;
}

int main()
{
    cout << "20181513 김유청" << endl;
    Circle circle;
    int size;
    int radius;
    string name;

    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager cm(size);
    cm.searchByName();
    cm.searchByArea();

    return 0;
}