#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 1; i <= str.size(); ++i)
    {
        cout << str[i-1];
        if (i % 10 == 0)
            cout << '\n';
    }
}
