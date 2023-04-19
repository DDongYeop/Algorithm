#include <iostream>

using namespace std;

int main()
{
    int index;
    int array[30] = {};

    for (int i = 0; i < 30; i++)
    {
        cin >> index;
        array[index-1] = index;
    }

    for (int i = 0; i < 30; i++)
        if (array[i] == 0)
            cout << i+1 << "\n";
}