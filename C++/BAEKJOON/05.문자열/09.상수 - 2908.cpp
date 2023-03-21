#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    swap(x[0], x[2]);
    swap(y[0], y[2]);

    if (x < y)
        cout << y;
    else
        cout << x;
}