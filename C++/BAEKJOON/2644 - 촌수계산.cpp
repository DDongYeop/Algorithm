#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, m, first, second, input1, input2;
    cin >> n >> first >> second >> m;
    vector<vector<int>> graph(n+1);
    vector<int> visited(n+1, -1);
    queue<int> q;

    while (m--)
    {
        cin >> input1 >> input2;
        graph[input1].push_back(input2);
        graph[input2].push_back(input1);
    }

    q.push(first);
    visited[first] = 0;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (int i : graph[front])
        {
            if (visited[i] != -1)
                continue;
            visited[i] = visited[front] + 1;
            q.push(i);
        }
    }

    cout << visited[second];
}
