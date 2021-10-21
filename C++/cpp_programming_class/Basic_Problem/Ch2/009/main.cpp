#include <iostream>
using namespace std;

int main(){
    string name,address;
    int age;

    cout << "이름은?";
    getline(cin,name,'\n');
    

    cout << "주소는?";
    getline(cin,address,'\n');

    cout <<"나이는?";
    cin>>age;

    cout <<name <<","<<address<<","<<age<<"세" <<endl;
}