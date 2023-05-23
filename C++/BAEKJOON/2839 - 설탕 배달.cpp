#include <iostream>
using namespace std;

int main()
{
    int input, num;
    cin >> input;

    if (input == 4 || input == 7)
    {
        cout << -1;
        return 0;
    }

    for(int i = 0; i <= input; ++i)
    {
        num = input - (i * 3);
        if (num % 5 == 0)
        {
            cout << (num / 5) + i;
            return 0;
        }
    }
}
