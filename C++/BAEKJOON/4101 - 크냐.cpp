#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            return 0;
        else if (a <= b)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}