#include <iostream>

using namespace std;

int main()
{
    int index = 0, n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        index += i;

    cout << index;
}