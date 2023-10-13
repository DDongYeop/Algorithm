#include <iostream>
#include <vector>

using namespace std;

int cnt = 0, input;
vector<vector<int>> graph;
vector<bool> visited;

void DFS(int i);

int main()
{
    int index;
    vector<bool> rootNode;
    cin >> index;
    graph.resize(index);
    visited.resize(index, false);
    rootNode.resize(index, false);

    for (int i = 0; i < index; ++i)
    {
        cin >> input;
        if (input == -1)
            rootNode[i] = true;
        else
            graph[input].push_back(i);
    }

    cin >> input;

    for (int i = 0; i < rootNode.size(); ++i)
    {
        if (rootNode[i])
            DFS(i);
    }

    cout << cnt;
}

void DFS(int i)
{
    if (i == input)
    {
        return;
    }

    if ((i != -1 && graph[i].size() == 0) || (graph[i].size() == 1 && graph[i][0] == input))
    {
        ++cnt;
        return;
    }

    for (int idx : graph[i])
    {
        if (visited[idx])
            continue;

        visited[i] = true;
        DFS(idx);
    }
}
