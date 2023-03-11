#include <iostream>

using namespace std;

int main()
{
    int index;
    cin >> index;

    for (int i = index-1; i >= 0; i--)
    {
        for (int j = index - i; j < index; j++)
            cout << " ";
        for (int j = index - i; j != 0; j--)
            cout << "*";
        cout << "\n";
    }
}