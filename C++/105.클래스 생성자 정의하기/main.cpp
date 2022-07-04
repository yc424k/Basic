#include <iostream>
#include <string>

using namespace std;

class Cpp
{
private:
    string name_;

public:
    Cpp()
    {
        name_ = "c++";
    };
    string GetName() const
    {
        return name_;
    }
};

int main()
{
    Cpp cpp;
    cout << cpp.GetName() << endl;

    return 0;
}