#include <iostream>
using namespace std;

int main()
{
    int index, x, y;
    int iArray[100][100] = {{0}};
    cin >> index;

    for (int i = 0; i < index; ++i)
    {
        cin >> x >> y;
        for (int j = x; j < x+10; ++j)
            for (int z = y; z < y+10; ++z)
                iArray[j][z] = 1;
    }
    index = 0;


    for (int i = 0; i < 100; ++i)
        for (int j = 0; j < 100; ++j)
            if (iArray[i][j] == 1)
                index++;

    cout << index;
}