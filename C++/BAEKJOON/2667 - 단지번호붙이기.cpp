#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, cnt = 0;
int addX[] = { 0, 0, -1, 1 };
int addY[] = { -1, 1, 0, 0 };
vector<vector<bool>> map;
vector<vector<bool>> visited;
priority_queue<int, vector<int>, greater<>> print;
queue<pair<int, int>> q;

int main()
{
    string str;
    cin >> n;
    map.resize(n);
    visited.resize(n, vector<bool>(n, false));

    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        for (auto c : str)
        {
            if (c == '0')
                map[i].push_back(false);
            else
                map[i].push_back(true);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!map[i][j])
                continue;
            if (visited[i][j])
                continue;
            cnt++;
            q.push(make_pair(i, j));

            int index = 0;
            while (!q.empty())
            {
                int posX = q.front().first;
                int posY = q.front().second;
                q.pop();

                for (int k = 0; k < 4; ++k)
                {
                    int x = posX + addX[k];
                    int y = posY + addY[k];

                    if (x < 0 || x >= n)
                        continue;
                    if (y < 0 || y >= n)
                        continue;
                    if (visited[x][y] || !map[x][y])
                        continue;

                    visited[x][y] = true;
                    q.push(make_pair(x, y));
                    ++index;
                }
            }
            print.push(index);
        }
    }

    cout << cnt << '\n';
    while (!print.empty())
    {
        if (print.top() == 0)
            cout << 1 << '\n';
        else
            cout << print.top() << '\n';
        print.pop();
    }
}
