#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    k -= n * m;

    if (k <= 0)
        cout << k * -1;
    else
        cout << 0;
}
