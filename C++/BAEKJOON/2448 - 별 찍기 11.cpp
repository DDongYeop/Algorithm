#include <iostream>

using namespace std;

int starPattern[][6] =
{
    { 0, 0, 1, 0, 0 },
    { 0, 1, 0, 1, 0 },
    { 1, 1, 1, 1, 1 },
};
int starMap[3600][6200];

void SetStarMap(int n, int posX, int posY)
{
    if (n < 3) return;

    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 6; ++x)
        {
            starMap[posY + y][posX + x] = starPattern[y][x];
        }
    }

    SetStarMap(n / 2, posX, posY);
    SetStarMap(n / 2, posX - n/2, posY + n/2);
    SetStarMap(n / 2, posX + n/2, posY + n/2);
}

void PrintStar(int n)
{
    int h = n * 2 - 1;
    int v = n;
    for (int y = 0; y < v; ++y)
    {
        for (int x = 0; x < h; ++x)
        {
            cout << ((starMap[y][x] == 1) ? "*" : " ");
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;

    SetStarMap(n, n-3, 0);
    PrintStar(n);
}
