#include <iostream>

using namespace std;

int main()
{
    int index;
    cin >> index;

    if (index % 4 == 0 && (index % 100 != 0 || index % 400 == 0))
        cout << 1;
    else 
        cout << 0;
}