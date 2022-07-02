#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<8> bit1;
    bit1.reset(); // 0000 0000
    bit1 = 127; // 0111 1111
    
    bitset<8> bit2;
    bit2.reset();
    bit2 = 0x29; // 32

    cout << bit1 << endl;
    cout << bit2 << endl;

    return 0;
}