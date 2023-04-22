#include <iostream>
using namespace std;

int main()
{
    int num, x, y;
    int cnt = 0;
    cin >> num;
    x = num;
    do
    {
        ++cnt;
        y = x % 10;
        y += static_cast<int>(x * .1f);
        if (y >= 10)
            y = y % 10;
        y += (x % 10) * 10;
        x = y;
    } while (num != x);
    cout << cnt;
}