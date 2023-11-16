#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        if (m <= 2)
        {
            cout << "NEWBIE!";
            return 0;
        }
    }
    if (n < m)
        cout << "TLE!";
    else
        cout << "OLDBIE!";
}
