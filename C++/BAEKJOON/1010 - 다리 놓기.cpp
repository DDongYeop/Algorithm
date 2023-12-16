#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        long long result = 1;
        int n, m = 0, r = 1;

        cin >> n >> m;

        for (int j = m; j > m - n; j--)
        {
            result = result * j;
            result = result / r;
            r++;
        }

        cout << result << '\n';
    }
}
