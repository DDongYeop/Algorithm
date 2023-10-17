#include <iostream>
#include <queue>

using namespace std;

int map[1001][1001];
int moveX[4]{ 1, -1, 0, 0 };
int moveY[4]{ 0, 0, 1, -1 };

int main()
{
    int x, y, input, startX, startY;
    queue<pair<int, int>> q;
    cin >> x >> y;

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            cin >> input;
            if (input == 2)
            {
                q.push(make_pair(i, j));
                map[i][j] = 0;
            }
            else if (input == 1)
                map[i][j] = -1;
            else
                map[i][j] = input;
        }
    }

    while (!q.empty())
    {
        int posX = q.front().first;
        int posY = q.front().second;

        for (int i = 0; i < 4; ++i)
        {
            int addX = posX + moveX[i];
            int addY = posY + moveY[i];
            if (map[addX][addY] == -1)
            {
                map[addX][addY] = map[posX][posY] + 1;
                q.push(make_pair(addX, addY));
            }
        }
        q.pop();
    }

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
            cout << map[i][j] << ' ';
        cout << '\n';
    }
}
