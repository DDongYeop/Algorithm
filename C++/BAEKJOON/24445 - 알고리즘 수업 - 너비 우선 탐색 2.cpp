#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

void BFS(int index);
bool Compare(int i, int j);

vector<vector<int>> graph;
vector<int> visited;
int n, m, v;

int main()
{
    int input1, input2;
    cin >> n >> m >> v;

    graph.resize(n + 1);
    visited = vector<int>(n + 1, 0);

    while (m--)
    {
        cin >> input1 >> input2;
        graph[input1].push_back(input2);
        graph[input2].push_back(input1);
    }

    for (int i = 1; i < graph.size(); ++i)
        sort(graph[i].begin(), graph[i].end(), Compare);

    BFS(v);

    for (int i = 1; i < visited.size(); ++i)
        cout << visited[i] << '\n';
}

void BFS(int index)
{
    queue<int> que;
    que.push(index);
    visited[index] = 1;
    int cnt = 1;

    while (!que.empty())
    {
        int current = que.front();
        que.pop();

        for (int i : graph[current])
        {
            if (visited[i])
                continue;
            visited[i] = ++cnt;
            que.push(i);
        }
    }
}

bool Compare(int i, int j)
{
    return j < i;
}
