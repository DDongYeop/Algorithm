#include <iostream>

using namespace std;

int main()
{
    string sArray[5];
    for (int i = 0; i < 5; i++)
        cin >> sArray[i];

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sArray[j].size() <= i)
                continue;
            cout << sArray[j][i];
        }
    }
}