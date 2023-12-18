#include <iostream>

using namespace std;

int main()
{
    int input, loop = 4, value = 0;
    
    while (loop--)
    {
        cin >> input;
        value += input;
    }

    cout << value / 60 << '\n' << value % 60;
}
