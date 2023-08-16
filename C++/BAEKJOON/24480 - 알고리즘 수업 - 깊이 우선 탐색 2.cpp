#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
int result[100001];
int cnt = 0;

bool Compare(int i, int j);
void DFS(int index);

int main()
{
    int n, m, r, input1, input2;
    cin >> n >> m >> r;

    graph.resize(n + 1);
    visited.resize(n + 1, false);

    while (m--)
    {
        cin >> input1 >> input2;
        graph[input1].push_back(input2);
        graph[input2].push_back(input1);
    }

    for (int i = 1; i < graph.size(); ++i)
        sort(graph[i].begin(), graph[i].end(), Compare);

    DFS(r);

    for (int i = 1; i <= n; i++)
        cout << result[i] << '\n';
}

void DFS(int index)
{
    if (visited[index])
        return;

    visited[index] = true;
    ++cnt;
    result[index] = cnt;

    for (int i : graph[index])
        DFS(i);
}

bool Compare(int i, int j)
{
    return j < i;
}
