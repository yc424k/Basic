#include <iostream>
#include <string>

using namespace std;

struct Princess
{
    string name;
    string father;
    string birthday = "알 수 없음";
}Goryeo[2]; // 미리 선언도 가능함

int main()
{
    Princess jungmyung;
    jungmyung.name = "정명공주";
    jungmyung.father = "조선 선조";
    jungmyung.birthday = "1603년 6월 27일";

    Goryeo[0].name = "선정왕후";
    Goryeo[0].father = "고려 성종";
    Goryeo[1].name = "효정공주";
    Goryeo[1].father = "고려 현종";
}