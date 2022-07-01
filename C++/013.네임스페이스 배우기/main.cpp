#include <iostream>

using namespace std;

namespace silla
{
    int year = 935;
    void CentralArea()
    {
        cout << "경상도" << endl;
    }
}

namespace baekjae
{
    int year = 600;

    void CentralArea()
    {
        cout << "충청도" << endl;
    }
}
using namespace silla;
using namespace baekjae;

int main()
{
    cout << "신라 중심지 : ";
    silla::CentralArea();
    cout << "신라 멸망연도 : " << silla::year << endl;
    cout << "백제 중심지 : ";
    baekjae::CentralArea();
    cout << "백제 명망연도 : " << baekjae::year << endl;

    return 0;
}