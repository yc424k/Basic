#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file;
    file.open("094.txt", ifstream::in);

    string line;

    while(getline(file, line))
        cout << line << endl;
    
    file.close();
    return 0;
}