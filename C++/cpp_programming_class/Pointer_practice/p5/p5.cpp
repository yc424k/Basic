#include <iostream>
using namespace std;

class Person
{
    string name;
    string tel;

public:
    Person(){};
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel);
};

void Person ::set(string name, string tel)
{
    this->name = name;
    this->tel = tel;
}

int main()
{
    cout << "20181513 김유청" << endl;
    Person person[3];
    string name;
    string phone_num;

    cout << "이름과 전화 번호를 입력해 주세요." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "사람 " << i + 1 << ">> ";
        cin >> name >> phone_num;
        //cin >> phone_num;
        person[i].set(name, phone_num);
    }

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
            cout << "모든 사람의 이름은 ";
        cout << person[i].getName() << " ";
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
            cout << "전화번호 검색합니다. 이름을 입력하세요 >>";
        cin >> name;
        if (name == person[i].getName()){
            cout << "전화번호는 " << person[i].getTel();
            return 0;
        }
            
    }

    return 0;
}