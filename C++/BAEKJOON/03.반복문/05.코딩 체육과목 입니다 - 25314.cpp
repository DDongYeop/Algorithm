#include <iostream>

using namespace std;

int main()
{
    int index;
    cin >> index;
    index = index / 4;
    for (int i = 0; i < index; i++)
        cout << "long ";
    cout << "int";
}