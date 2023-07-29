#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
int cnt;

void DFS(int index);

int main()
{
    int input1, input2, input3;
    cin >> input1;

    graph.resize(input1 + 1);
    visited.resize(input1 + 1, false);
    cnt = -1;

    cin >> input1;

    while (input1--)
    {
        cin >> input2 >> input3;
        graph[input2].push_back(input3);
        graph[input3].push_back(input2);
    }

    for (int i = 1; i < graph.size(); ++i)
        sort(graph[i].begin(), graph[i].end());

    DFS(1);

    cout << cnt;
}

void DFS(int index)
{
    if (visited[index])
        return;

    ++cnt;
    visited[index] = true;

    for (int i : graph[index])
    {
        if (!visited[i])
            DFS(i);
    }
}
