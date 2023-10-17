#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int index, strSize, cnt = 0, check = 0;
    string str;
    cin >> index >> strSize >> str;

    for (int i = 0; i < strSize - (index * 2) + (check * 2); ++i)
    {
        if (str[i] == 'I')
            check = 1;
        else if (check != 0 && str[i] == 'O' && str[i + 1] == 'I')
        {
            ++check;
            ++i;
            if (check > index)
                ++cnt;
        }
        else
            check = 0;
    }

    cout << cnt;
}
