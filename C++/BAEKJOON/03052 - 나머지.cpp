#include <iostream>

using namespace std;

int main()
{
    int index, cnt = 1;
    int array[10] = {};

    for (int i = 0 ; i < 10; i++)
    {
        cin >> index;
        array[i] = index % 42;

        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
                break;
            if (i-1 == j)
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
}