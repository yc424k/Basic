#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string v;
    getline(cin, v, '\n'); //abababa
    int len = v.length();
    cout << len << endl;
    cout << "v[0]:" << v[0] << endl;
    cout << "v[1]:" << v[1] << endl;
    vector<char> doc;
    cout << "start" << endl;
    for (int i = 0; i < v.length(); i++)
    {
        doc.push_back(v[i]);
    }
    //doc.push_back("\n");
    //doc.push_back(&v[0]);
    //doc.push_back(&v[1]);

    for (int i = 0; i < v.length(); i++)
    {
        cout << doc[i] << endl;
    }
    //cout << doc.begin();
    //cout << doc.at(1);

    /*string s; 
   cin >> s;
   int l = s.length();
   v.push_back(make_pair(l, s));*/

    /*for (int i = 0; i < len; i++) {
      doc.push_back()=v[i]
   }*/
}