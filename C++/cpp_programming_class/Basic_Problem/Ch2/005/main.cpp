#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
    
    cout << "문자들은 입력하라(100개 미만)." << endl;
    char test[100];
    cin.getline(test, 100);

    cout<<test<<endl;
    int count = 0;
    for (int i = 0; i<strlen(test); i++)
    {
        if (test[i] == 'x')
            count++;
    }
    cout << "x의 개수는 " << count << endl;
}