#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "20181513 김유청" << endl;
    string str;
    int count = 0;
    cout << "문자열 입력 >> ";
    getline(cin, str);
    for (unsigned int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == 'a')
            count++;
    }
    cout << "문자 a는 " << count << "개 있습니다."<<endl;

    int pos = 0;
    count = 0;
    while (str.find('a', pos) != -1)
    {
        count++;
        pos+=str.find('a',pos) + 1;
    }
    
    cout << "문자 a는 " << count << "개 있습니다."<<endl;
    // for (unsigned int i = 0; i < str.length(); i++)
    // {
    //     if (str.find('a',i) > 0)
    //         count++;
    // }
    // cout << "문자 a는 " << count << "개 있습니다."<<endl;
        return 0;
}