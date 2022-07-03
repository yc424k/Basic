#include <string>
#include <iostream>

using namespace std;

int main()
{
    const string MyJob = "Developer";

    string question = "who are you : ";
    string answer = "my job is : ";

    cout << question << MyJob << endl;
    cout << answer << MyJob << endl;

    return 0;
}