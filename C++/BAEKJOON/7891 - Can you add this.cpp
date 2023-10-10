#include <iostream>

using namespace std;

int main()
{
    int loop, first, second;
    cin >> loop;
    while (loop--)
    {
        cin >> first >> second;
        cout << first + second << '\n';
    }
}