#include <iostream>

using namespace std;

int main()
{
    int index;
    cin >> index;
    int array[index * 2];

    for (int i = 0; i < index; i++)
        cin >> array[i] >> array[index + i];

    for (int i = 0; i < index; i++)
        cout << "Case #" << i+1 << ": " << array[i] + array[i+index] << "\n";
}