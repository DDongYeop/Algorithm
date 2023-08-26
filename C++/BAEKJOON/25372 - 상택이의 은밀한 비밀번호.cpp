#include <iostream>

using namespace std;

int main()
{
    int n, m;
    string str;
    cin >> n;

    while (n--)
    {
        cin >> str;
        m = str.size();
        if (6 <= m && m <= 9)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}