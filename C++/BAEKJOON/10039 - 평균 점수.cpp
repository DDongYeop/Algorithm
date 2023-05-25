#include <iostream>
using namespace std;

int main()
{
    int input, num = 0;
    for (int i = 0; i < 5; ++i)
    {
        cin >> input;
        if (input < 40)
            input = 40;
        num += input;
    }
    cout << num * .2f;
    return 0;
}
