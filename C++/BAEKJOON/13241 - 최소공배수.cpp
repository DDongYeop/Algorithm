#include <iostream>
using namespace std;

int main()
{
    long long int x, y;
    cin >> x >> y;
    long long int x2 = x, y2 = y;

    while (x2 != y2)
    {
        if (x2 > y2)
            y2 += y;
        else 
            x2 += x;
    }

    cout << x2;
}