#include <iostream>

using namespace std;

int main()
{
    int index, index2, num = 0;
    cin >> index;
    int array[index];

    for (int i = 0; i < index; i++)
        cin >> array[i];

    cin >> index2;
    for (int i = 0; i < index; i++)
    {
        if (array[i] == index2)
            num++;
    }
    cout << num;    
}