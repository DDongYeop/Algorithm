#include <iostream>

using namespace std;

int main()
{
    int h, m, time;
    cin >> h >> m >> time;

    m += time;
    while (m >= 60)
    {
        m -= 60;
        h++;

        if (h >= 24)
            h -= 24;
    }
    cout << h << " " << m;
}