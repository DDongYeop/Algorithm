#include <iostream>

using namespace std;

int main()
{
    int loop, input;
    cin >> loop;

    while (loop--)
    {
        cin >> input;
        if (input % 2)
            cout << input << " is odd\n";
        else
            cout << input << " is even\n";
    }
}
