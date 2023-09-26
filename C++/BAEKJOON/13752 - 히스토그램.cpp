#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;

    while (n--)
    {
        cin >> m;
        while (m--)
            cout << '=';
        cout << '\n';
    }
}