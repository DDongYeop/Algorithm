#include <iostream>
using namespace std;

int main()
{
    string str;
    int input, num = 1, index = 0;
    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        cin >> str;
        num = 1;
        index = 0;
        for (int j = 0; j < str.size(); ++j)
        {
            if (str[j] == 'O')
            {
                index += num;
                ++num;
            }
            else
                num = 1;
        }
        cout << index << '\n';
    }
}
