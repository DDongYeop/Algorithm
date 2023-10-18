#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int loop, first = 0, second = 0;
vector<vector<int>> map;
int addX[4] = { 1, -1, 0, 0 };
int addY[4] = { 0, 0, 1, -1 };

void NormalFind();
void SpecialFind();

int main()
{
    string str;
    cin >> loop;

    map.resize(loop);

    for (int i = 0; i < loop; ++i)
    {
        cin >> str;
        for (char c : str)
            map[i].push_back(c);
    }

    NormalFind();
    SpecialFind();

    cout << first << ' ' << second;
}

void NormalFind()
{
    vector<vector<bool>> visited(loop, vector<bool>(loop, false));
    queue<pair<int, int>> q;

    for (int i = 0; i < loop; ++i)
    {
        for (int j = 0; j < loop; ++j)
        {
            if (visited[i][j])
                continue;

            q.push(make_pair(i, j));
            visited[i][j] = true;
            first++;

            while (!q.empty())
            {
                int x = q.front().first;
                int y = q.front().second;

                for (int i = 0; i < 4; ++i)
                {
                    int posX = x + addX[i];
                    int posY = y + addY[i];
                    if (posX < 0 || posY < 0 || posX >= loop || posY >= loop)
                        continue;
                    else if (visited[posX][posY])
                        continue;

                    if (map[x][y] == map[posX][posY])
                    {
                        visited[posX][posY] = true;
                        q.push(make_pair(posX, posY));
                    }
                }
                q.pop();
            }
        }
    }
}

void SpecialFind()
{
    vector<vector<bool>> visited(loop, vector<bool>(loop, false));
    queue<pair<int, int>> q;

    for (int i = 0; i < loop; ++i)
    {
        for (int j = 0; j < loop; ++j)
        {
            if (visited[i][j])
                continue;

            q.push(make_pair(i, j));
            visited[i][j] = true;
            second++;

            while (!q.empty())
            {
                int x = q.front().first;
                int y = q.front().second;

                for (int i = 0; i < 4; ++i)
                {
                    int posX = x + addX[i];
                    int posY = y + addY[i];
                    if (posX < 0 || posY < 0 || posX >= loop || posY >= loop)
                        continue;
                    else if (visited[posX][posY])
                        continue;

                    if (map[x][y] == map[posX][posY] || (map[x][y] == 'R' && map[posX][posY] == 'G') || (map[x][y] == 'G' && map[posX][posY] == 'R'))
                    {
                        visited[posX][posY] = true;
                        q.push(make_pair(posX, posY));
                    }
                }
                q.pop();
            }
        }
    }
}
