#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

void DFS(int index);
void BFS(int index);

vector<vector<int>> graph;
vector<bool> visited;
int n, m, v;

int main()
{
    int input1, input2;
    cin >> n >> m >> v;

    graph.resize(n + 1);
    visited = vector<bool>(n + 1, false);

    while (m--)
    {
        cin >> input1 >> input2;
        graph[input1].push_back(input2);
        graph[input2].push_back(input1);
    }

    for (int i = 1; i < graph.size(); ++i)
        sort(graph[i].begin(), graph[i].end());

    DFS(v);
    cout << '\n';
    visited = vector<bool>(n + 1, false);
    BFS(v);
}

void DFS(int index)
{
    if (visited[index])
        return;

    visited[index] = true;
    cout << index << ' ';

    for (int j : graph[index])
        DFS(j);
}

void BFS(int index)
{
    queue<int> que;
    que.push(index);
    visited[index] = true;

    while (!que.empty())
    {
        int current = que.front();
        que.pop();

        cout << current << ' ';

        for (int i : graph[current])
        {
            if (visited[i])
                continue;
            visited[i] = true;
            que.push(i);
        }
    }
}
