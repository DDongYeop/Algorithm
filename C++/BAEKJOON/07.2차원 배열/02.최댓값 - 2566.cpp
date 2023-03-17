#include <iostream>

using namespace std;

int main()
{
    int iIndex;
    int iMaxIndex = 0, iMaxPos[2] = {0};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> iIndex;
            if (iMaxIndex <= iIndex)
            {
                iMaxIndex = iIndex;
                iMaxPos[0] = i+1;
                iMaxPos[1] = j+1;
            }
        }
    }

    cout << iMaxIndex << endl << iMaxPos[0] << ' ' << iMaxPos[1];
}