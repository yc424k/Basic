#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
int s, e;
vector<vector<int>> adjArray;
vector<int> visited;

void AddEdge(int start, int end)
{
    adjArray[start].push_back(end);
    adjArray[end].push_back(start);
}

void printGraph()
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < adjArray[i].size(); j++)
            cout << adjArray[i][j] << " ";
        cout << endl;
    }
}

void BFS_Mat(int s){
    queue<int> queue;

    visited[s] = 1;
    queue.push(s);
    
    while(!queue.empty()){

        int here = queue.front();

        cout << here << " ";
        queue.pop();

        for(int i = 0; i < adjArray[here].size(); i++){
            int next = adjArray[here][i];

            if(!visited[next]){
                visited[next] = 1;
                queue.push(next);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    adjArray.resize(n + 1);
    visited.resize(n + 1);

    for (int i = 0; i < m; i++)
    {
        cin >> s >> e;
        AddEdge(s, e);
    }
    printGraph();

    BFS_Mat(1);

    cout << endl;
}