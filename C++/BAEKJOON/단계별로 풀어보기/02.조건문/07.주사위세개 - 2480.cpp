#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x == y && y == z)
    {
        cout << 10000 + (x * 1000);
        return 0;
    }
    else if (x == y)
    {
        cout << 1000 + (x * 100);
        return 0;
    }
    else if (y == z)
    {
        cout << 1000 + (y * 100);
        return 0;
    }
    else if (z == x)
    {
        cout << 1000 + (z * 100);
        return 0;
    }

    int index = x; 
    if (index < y)
        index = y;
    if (index < z)
        index = z;

    cout << index * 100;
}