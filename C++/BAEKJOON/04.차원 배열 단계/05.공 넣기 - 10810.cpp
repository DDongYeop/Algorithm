#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, k;
    cin >> n >> m;
    int array[n] = {0};

    for (int x = 0; x < m; x++)
    {
        cin >> i >> j >> k;
        for (int y = i-1; y <= j-1; y++)
            array[y] = k;
    }

    for (int x = 0; x < n; x++)
        cout << array[x] << ' '; 
}