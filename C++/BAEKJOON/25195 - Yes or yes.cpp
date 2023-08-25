#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> graph;
unordered_set<int> us;
bool _isYES = false;

void DFS(int index);

int main()
{
    int n, m, index1, index2, s;
    cin >> n >> m;

    graph.resize(n + 1);

    while (m--)
    {
        cin >> index1 >> index2;
        graph[index1].push_back(index2);
    }

    cin >> m;

    while (m--)
    {
        cin >> s;
        us.insert(s);
    }

    DFS(1);

    if (_isYES)
        cout << "yes";
    else
        cout << "Yes";
}

void DFS(int index)
{
    if (us.find(index) != us.end())
        return;

    if (graph[index].size() == 0)
    {
        _isYES = true;
        return;
    }
    for (int i : graph[index])
    {
        DFS(i);
    }
}
