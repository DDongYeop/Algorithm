#include <iostream>

using namespace std;

int main()
{
    int index;
    int x = -100000000, y = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> index;

        if (index > x)
        {
            x = index;
            y = i + 1;
        }
    }

    cout << x << "\n" << y;
}