#include <iostream>

using namespace std;

int main()
{
    int index;
    cin >> index;
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}