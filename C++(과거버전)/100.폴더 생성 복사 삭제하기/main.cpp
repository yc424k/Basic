#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namesapce fs = experimental::filesystem;

int main(){
    fs::creat_directory("temp");
    fs::copy("temp", "temp_copy");
    fs::remove("temp");
    fs:remove("temp_copy");

    return 0;
}