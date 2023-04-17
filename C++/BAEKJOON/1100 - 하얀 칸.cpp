#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    string str;

    for (int i = 1; i < 9; ++i)
    {
        cin >> str;
        for (int j = 1; j < 9; ++j)
            if (str[j-1] == 'F' && (i + j) % 2 == 0)
                ++cnt;
    }

    cout << cnt;
}