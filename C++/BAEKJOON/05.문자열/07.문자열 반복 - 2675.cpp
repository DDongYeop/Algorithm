#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int iArray[num];
    string sArray[num];

    for (int i = 0; i < num; i++)
        cin >> iArray[i] >> sArray[i];

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < sArray[i].size(); j++)
            for (int k = 0; k < iArray[i]; k++)
                cout << sArray[i][j];
        cout << '\n';
    }
}