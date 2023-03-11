#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    int array[a];

    for (int i = 0; i < a; i++)
        cin >> array[i];

    for (int i = 0; i < a; i++)
        if (n > array[i])
            cout << array[i] << ' ';
}