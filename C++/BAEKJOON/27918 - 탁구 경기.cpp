#include <iostream>

using namespace std;

int main()
{
    int loop, x = 0, y = 0;
    char c;
    cin >> loop;

    while (loop--)
    {
        cin >> c;

        if (x - y == 2 || x - y == -2)
            continue;

        if (c == 'D')
            ++x;
        else
            ++y;
    }

    cout << x << ':' << y;
}