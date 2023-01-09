#include <iostream>
#include <string>

using namespace std;

class CppInfo
{
public:
    CppInfo()
    {
        value_ = "C++";
    };
    CppInfo(const string value)
    {
        value_ = value;
    };
    CppInfo(const int value)
    {
        value_ = "C++을 작성한 년도";
        value_ += to_string(value);
    };

public:
    string GetValue() const
    {
        return value_;
    }

private:
    string value_;
};

int main()
{
    CppInfo cpp_info1;
    CppInfo cpp_info2("Python");
    CppInfo cpp_info3(2022);

    cout << cpp_info1.GetValue() << endl;
    cout << cpp_info2.GetValue() << endl;
    cout << cpp_info3.GetValue() << endl;

    return 0;
}