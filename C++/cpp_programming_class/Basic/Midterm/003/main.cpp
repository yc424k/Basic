//출력 결과:
// 너비를 입력하세요>>
// input : 3
// 높이를 입력하세요>>
// input : 5
// 면적은 15

#include <iostream>
using namespace std;

int main(){
    cout << "너비를 입력하세요>>";

    int width;
    cin >> width; //키보드의 입력을 width에 저장

    cout << "높이를 입력하세요>>";

    int height;
    cin >> height; //키보드의 입력을 height에 저장

    int area = width * height;
    cout << "면적은 " << area << "\n";
    
}