#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int GCD, LCMx, LCMy;
    GCD = x;
    LCMx = x;
    LCMy = y;
    

    while (x % GCD != 0 || y % GCD != 0)
        --GCD;

    while (LCMx != LCMy)
    {
        if (LCMx < LCMy)
            LCMx += x;
        else
            LCMy += y;
    }

    cout << GCD << '\n' << LCMx;
}
