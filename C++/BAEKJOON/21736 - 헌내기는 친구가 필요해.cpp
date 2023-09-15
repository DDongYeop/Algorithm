#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, index = 0;
int addX[] = { 1, 0, -1, 0 };
int addY[] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;
vector<vector<char>> map;
vector<vector<bool>> visited;

void BFS();

int main()
{
    string str;
    cin >> n >> m;
    map.resize(m, vector<char>(n));
    visited.resize(m, vector<bool>(n, false));

    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        for (int j = 0; j < m; ++j)
            map[j][i] = str[j];
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (map[i][j] == 'I')
            {
                visited[i][j] = true;
                q.push(make_pair(i, j));
                BFS();

                if (index)
                    cout << index;
                else
                    cout << "TT";

                return 0;
            }
        }
    }
}

void BFS()
{
    while (!q.empty())
    {
        int posX = q.front().first;
        int posY = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int x = posX + addX[i];
            int y = posY + addY[i];

            if (x < 0 || x >= m)
                continue;
            if (y < 0 || y >= n)
                continue;
            if (visited[x][y] == true)
                continue;
            if (map[x][y] == 'X')
                continue;

            visited[x][y] = true;
            if (map[x][y] == 'P')
                index++;
            q.push(make_pair(x, y));
        }
    }
}
