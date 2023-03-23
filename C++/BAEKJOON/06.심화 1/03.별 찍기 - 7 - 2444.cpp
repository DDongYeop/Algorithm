#include <iostream>
using namespace std;

int main()
{
    int index, num = 0;
    cin >> index;

    for (int i = 0; i < index; ++i)
    {
        num = index - 1 - i;
        for (int j = 0; j < index + i; ++j)
        {
            if (num != 0)
            {
                cout << ' ';
                --num;
            }
            else 
                cout << '*';
        }
        cout << '\n';
    }
    for (int i = index-1; i > 0; --i)
    {
        num = index - i;
        for (int j = index+i-1; j > 0; --j)
        {
            if (num != 0)
            {
                cout << ' ';
                --num;
            }
            else 
                cout << '*';
        }
        cout << '\n';
    }
}