#include <iostream>

using namespace std;

int arr[9];
bool visited[9];

void BackTracking(int n, int m, int num, int cnt);

int main()
{
    int n, m;
    cin >> n >> m;
    BackTracking(n, m, 1, 0);
}

void BackTracking(int n, int m, int num, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < cnt; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    else
    {
        for (int i = num; i <= n; ++i)
        {
            if (visited[i])
                continue;
            arr[cnt] = i;
            visited[i] = true;
            BackTracking(n, m, i + 1, cnt + 1);
            visited[i] = false;
        }
    }
}
