#include <iostream>

using namespace std;

int main()
{
    int index; 
    cin >> index;
    int array[index];
    int x = 100000000, y = -100000000;

    for (int i = 0; i < index; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < index; i++)
        if (x > array[i])
            x = array[i];

    for (int i = 0; i < index; i++)
        if (y < array[i])
            y = array[i];

    cout << x << " " << y;
}  