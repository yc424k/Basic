#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "20181513 김유청" << endl;
    string str;
    srand((unsigned)time(0));
    cout << "아래에 한줄을 입력하세요.(exit를 입력하면 종료합니다)"<<endl;
    while (true)
    {
        cout<<">>";
        getline(cin, str, '\n');

        if (str == "exit")
            break;
        int rand_index; //= (rand()) % (str.length());
        do{
            rand_index = (rand()) % (str.length());
        }while(!(((int)str[rand_index] >= 65 && (int)str[rand_index] <= 91) || ((int)str[rand_index] >= 97 && (int)str[rand_index] <= 123)));
        int Capital = rand() % 2;
        if (Capital == 1)
            str[rand_index] = (char)((rand() % 26) + 65);
        else
            str[rand_index] = (char)((rand() % 26) + 97);
        cout << str << endl;
    }

    return 0;
}