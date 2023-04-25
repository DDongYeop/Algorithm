#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[6][10];
    int num, x, cnt =0;
    cin >> num;
    for (int i = 0; i < 6; ++i)
        for (int j = 0; j < 10; ++j)
            array[i][j] = j;

    while (num > 0)
    {
        x = num % 10;
        num -= x;
        num *= 0.1f;
        for (int i = 0; i < 6; ++i)
        {
            if (array[i][x] == x)
            {
                array[i][x] = -1;
                if (i > cnt)
                {
                    cnt = i;
                }
                break;
            }
            else if (x == 6)
            {
                if (array[i][9] != -1)
                {
                    array[i][9] = -1;
                    if (i > cnt)
                        cnt = i;
                    break;
                }
            }
            else if (x == 9)
            {
                if (array[i][6] != -1)
                {
                    array[i][6] = -1;
                    if (i > cnt)
                        cnt = i;
                    break;
                }
            }
        }
    }
    cout << cnt+1;
}
