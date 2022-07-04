#include <iostream>
#include <filesystem>

using namespace std;

namespace fs = experimental::filesystem;

int main()
{
    int size = fs::file_size("python.txt");

    cout << "파일 크기 : " << size << "바이트" << endl;

    return 0;
}