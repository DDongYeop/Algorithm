#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
int result[100001];

void DFS(int index, int cnt);

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
        sort(graph[i].begin(), graph[i].end());

    DFS(r, 0);

    for (int i = 1; i <= n; i++)
    {
        if (i == r)
            cout << 0 << '\n';
        else if (result[i] == 0)
            cout << -1 << '\n';
        else
            cout << result[i] << '\n';
    }
}

void DFS(int index, int cnt)
{
    if (visited[index])
        return;

    visited[index] = true;
    result[index] = cnt;

    for (int i : graph[index])
        DFS(i, cnt + 1);
}
