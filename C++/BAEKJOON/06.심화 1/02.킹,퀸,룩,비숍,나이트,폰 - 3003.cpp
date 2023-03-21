#include <iostream>
using namespace std;

int main()
{
    int iArray[6];
    int iOriginArray[6] = { 1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; ++i)
    {
        cin >> iArray[i];
        iArray[i] -= iOriginArray[i];
        iArray[i] *= -1;
    }

    for (int i = 0; i < 6; ++i)
        cout << iArray[i] << ' ';

}