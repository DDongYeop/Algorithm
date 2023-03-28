#include <iostream>
using namespace std;

int main()
{
    int n, m, minIndex = -1, num = 0;
    cin >> n >> m;

    for (int i = n; i <= m; ++i)
    {
        for (int j = 2; j <= i; ++j)
        {
            if (i == j)
            {
                if (minIndex == -1)
                    minIndex = i;
                num += i;
                break;
            }
            if (i % j == 0)
                break;
        }
    }

    if (num == 0)
        cout << minIndex;
    else
        cout << num << '\n' << minIndex;
}