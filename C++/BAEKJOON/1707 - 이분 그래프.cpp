#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<int> colors;
bool isBipartiteGraph = true;

void DFS(int index, int color);

int main()
{
    int k, v, e, input1, input2;

    cin >> k;

    while (k--)
    {
        cin >> v >> e;
        graph = vector<vector<int>>(v + 1);
        colors = vector<int>(v + 1, 0);
        isBipartiteGraph = true;

        while (e--)
        {
            cin >> input1 >> input2;
            graph[input1].push_back(input2);
            graph[input2].push_back(input1);
        }

        for (int i = 1; i <= v; ++i)
        {
            if (colors[i] == 0)
                DFS(i, (i % 2) + 1);
        }

        if (isBipartiteGraph)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

void DFS(int index, int color)
{
    if (colors[index] != 0)
    {
        if (color != colors[index])
            isBipartiteGraph = false;
        return;
    }

    colors[index] = color;
    for (auto i : graph[index])
    {
        if (color == 2)
            DFS(i, 1);
        else
            DFS(i, 2);
    }
}
