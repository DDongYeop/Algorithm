#include <iostream>

using namespace std;

int main()
{
    int x, y, z = 0, n = 0; 
    cin >> x >> y;

    z = x * y;

    while (y != 0)
    {
        n = y;
        n = n % 10;
        cout << n * x << endl;
        y = (y - n) * 0.1f;
    }

    cout << z;
}