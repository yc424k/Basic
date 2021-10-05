#include <iostream>
using namespace std;

#define MAX_N 15

int weight[MAX_N + 1];
int result = 0;
int N = 0;
int c = 0;

void countTeams(int h, int wA, int wB, int wC)
{
    //cout << "h :" << h << endl;
    if (N == h)
    {
        if (wA == wB && wB == wC)
        {
            result++;
        }
        return;
    }

    countTeams(h + 1, wA, wB, wC);
    countTeams(h + 1, wA + weight[h+1], wB, wC);
    countTeams(h + 1, wA, wB + weight[h+1], wC);
    countTeams(h + 1, wA, wB, wC + weight[h+1]);
}

int main(void)
{
    int T;
    //cout << "총 테스트 케이스 개수 : ";
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        //cout << "학생수 : ";
        cin >> N;
	//cout << N;

        for (int j = 1; j <= N; j++)
        {
            //cout << "몸무게 : ";
            cin >> weight[j];
            //cout << "test" << weight[j];
        }

        countTeams(0, 0, 0, 0);
        cout << result << endl;
        result = 0;
    }
}
