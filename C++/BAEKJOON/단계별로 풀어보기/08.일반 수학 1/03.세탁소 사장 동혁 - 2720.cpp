#include <iostream>
using namespace std;

int main()
{
    int num, index;
    int quarter = 0, dime = 0, nickel = 0, penny = 0; 
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        cin >> index;
        while (index)
        {
            if (index > 24)
            {
                index -= 25;
                ++quarter;
            }
            else if (index > 9)
            {
                index -= 10;
                ++dime;
            }
            else if (index > 4)
            {
                index -= 5;
                ++nickel;
            }
            else if (index > -1)
            {
                index -= 1;
                ++penny;
            }
        }

        cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
        quarter = dime = nickel = penny = 0;
    }
}
