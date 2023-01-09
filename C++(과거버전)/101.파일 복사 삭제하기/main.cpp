#include <iostream>
#include <filesystem>
#include <string>

using namespace std;

namespace fs = experimental::filesystem;

int main()
{
    fs::copy("c.txt", "c++.txt");
    fs::remove("c.txt");

    return 0;
}