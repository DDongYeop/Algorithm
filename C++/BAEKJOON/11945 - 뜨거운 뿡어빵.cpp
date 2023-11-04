#include <iostream>

using namespace std;

int main()
{
    int x, y;
    string str;
    cin >> x >> y;
    while (x--)
    {
        cin >> str;
        for (int j = str.size()-1; j >= 0; --j)
            cout << str[j];
        cout << '\n';
    }
}
