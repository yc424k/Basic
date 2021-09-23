#include <iostream>
using namespace std;

int main(){
    cout << "Input count number ?";
    int n;
    int result = 0;
    cin >> n;
    int *p = new int [n];
    for(int i;i<n;i++){
        int num;
        cin >> p[i];
    }

    for(int i; i<n ; i++){
        result += p[i];
    }

    cout << result/n <<endl;

    return 0;
}