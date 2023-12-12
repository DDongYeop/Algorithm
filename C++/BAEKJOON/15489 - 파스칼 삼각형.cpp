#include <iostream>

using namespace std;

int main()
{
    int r, c, w, arr[30][30], cnt = 0;
    cin >> r >> c >> w;

    arr[0][0] = 1;
    for (int i = 1; i < 30; ++i)
    {
        arr[i][0] = 1;
        for (int j = 1; j < i; ++j)
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        arr[i][i] = 1;
    }

    r -= 1;
    c -= 1;
    w -= 1;
    for (int i = r; i <= r + w; ++i)
    {
        for (int j = c; j <= c + i - r; ++j)
            cnt += arr[i][j];
    }
    cout << cnt;
}
