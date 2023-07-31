#include <iostream>

using namespace std;

int arr[9];
bool visited[9];

void BackTracking(int n, int m, int cnt);

int main()
{
    int n, m;
    cin >> n >> m;
    BackTracking(n, m, 0);
}

void BackTracking(int n, int m, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < cnt; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            if (visited[i])
                continue;
            arr[cnt] = i;
            for (int j = 0; j < i; ++j)
                visited[j] = true;
            BackTracking(n, m, cnt + 1);
            arr[cnt] = 0;
            for (int j = 0; j < i; ++j)
                visited[j] = false;
        }
    }
}
