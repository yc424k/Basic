#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string silla = "dvided into the Three Kingdoms.";
    string joseon = "Yi Seong-gye, established Joseon in 1392.";

    transform(silla.begin(), silla.end(), silla.begin(), ::toupper);
    transform(joseon.begin(), joseon.end(), joseon.begin(), ::tolower);

    char lower_ch = 'g';
    char upper_ch = 'B';

    lower_ch = toupper(lower_ch);
    upper_ch = tolower(upper_ch);

    cout << silla << endl;
    cout << joseon << endl;
    cout << lower_ch << " " << upper_ch << endl;

    return 0;
}