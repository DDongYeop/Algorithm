#include <iostream>

using namespace std;

int main()
{
    int input, cnt = 0;
    cin >> input;

    input *= -1;
    input += 1000;

    while (input)
    {
        if (input >= 500)
            input -= 500;
        else if (input >= 100)
            input -= 100;
        else if (input >= 50)
            input -= 50;
        else if (input >= 10)
            input -= 10;
        else if (input >= 5)
            input -= 5;
        else if (input >= 1)
            input -= 1;
        ++cnt;
    }

    cout << cnt;
}
