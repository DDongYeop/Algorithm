#include<iostream>
using namespace std;

int main()
{
    int x, y, z;

    while (cin >> x >> y >> z)
    {
        if (x + y + z == 0)
            return 0;

        if (z < x)
            swap(z, x);
        if (z < y)
            swap(z, y);
        
        if (z * z == (x * x) + (y * y))
            cout << "right\n";
        else
            cout << "wrong\n";
    }
}
