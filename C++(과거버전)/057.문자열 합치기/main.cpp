#include <iostream>
#include <string>

using namespace std;

int main()
{
    string king = "조선 세종";
    string favorite1 = "고기";
    string favorite2 = "야근";

    string king_info = "";

    king_info += king;
    king_info += favorite1;
    king_info += favorite2;

    cout << king_info << endl;

    return 0;
}