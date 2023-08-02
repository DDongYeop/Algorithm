#include <iostream>

using namespace std;

int arr[9];

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
            arr[cnt] = i;
            BackTracking(n, m, cnt + 1);
            arr[cnt] = 0;
        }
    }
}
