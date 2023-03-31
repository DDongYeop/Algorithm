#include <iostream>

using namespace std;

int main()
{
    int x, y, index;
    cin >> x >> y;
    int iArray[x][y];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            iArray[i][j] = 0;

    for (int z = 0; z < 2; z++)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> index;
                iArray[i][j] += index;
            }   
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << iArray[i][j] << ' ';
        cout << "\n";
    }
}
