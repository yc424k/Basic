#include <iostream>
using namespace std;

class Sample
{
    int *p;
    int size;

public:
    Sample(int n)
    {
        size = n;
        p = new int[n];
    }
    void read();
    void write();
    int big();
    ~Sample(){};
};
void Sample::read(){
    cout << "크기 입력: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> p[i];
    }
}

void Sample::write(){
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

int Sample::big(){
    int big = p[0];
    for(int i = 0; i<size;i++){
        if(big < p[i])
            big=p[i];
    }

    return big;
}

int main(){
    cout << "20181513 김유청" << endl;
    Sample s(10);
    s.read();
    s.write();
    cout << "가장 큰 수는 " << s.big() << endl;
}