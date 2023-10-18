#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;

int main()
{
    int n, m, input1, input2;
    queue<int> q;
    cin >> n >> m;

    graph.resize(101);
    visited.resize(101, 0);

    while (n--)
    {
        cin >> input1 >> input2;
        graph[input1].push_back(input2);
    }
    while (m--)
    {
        cin >> input2 >> input1;
        graph[input2].push_back(input1);
    }

    visited[1] = 1;
    q.push(1);

    while (!q.empty())
    {
        int front = q.front();

        if (front == 100)
            break;

        for (int i = front + 1; i <= front + 6; ++i)
        {
            if (i > 100)
                continue;
            if (visited[i] != 0)
                continue;

            for (int j : graph[i])
            {
                if (visited[j] != 0)
                    continue;
                visited[j] = visited[front] + 1;
                q.push(j);
            }

            if (graph[i].size() != 0)
                continue;

            visited[i] = visited[front] + 1;
            q.push(i);
        }

        q.pop();
    }

    cout << visited[100] - 1;
}
