#include <iostream>

using namespace std;

int main()
{
    int input1, input2;
    while (cin >> input1 >> input2)
    {
        if (input1 == 0 && input2 == 0)
            return 0;
        cout << input1 + input2 << '\n';
    }
}
