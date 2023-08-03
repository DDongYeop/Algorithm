#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, input1, input2;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<int> graphSize(n + 1);
    vector<bool> isVisited;
    isVisited.resize(n + 1, false);

    while (m--)
    {
        cin >> input1 >> input2;
        graph[input1].push_back(input2);
        graphSize[input2]++;
    }

    for (int i = 1; i < graph.size(); ++i)
    {
        if (graphSize[i] == 0 && !isVisited[i])
        {
            for (auto idx : graph[i])
                graphSize[idx]--;

            cout << i << ' ';
            isVisited[i] = true;
            i = 0;
        }
    }
}
