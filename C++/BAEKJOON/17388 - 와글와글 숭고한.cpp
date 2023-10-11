#include <iostream>

using namespace std;

int main()
{
    int minIndex = 101, bout = 0, input, idx;

    for (int i = 0; i < 3; ++i)
    {
        cin >> input;
        bout += input;

        if (minIndex > input)
        {
            minIndex = input;
            idx = i;
        }
    }

    if (bout >= 100)
        cout << "OK";
    else if (idx == 0)
        cout << "Soongsil";
    else if (idx == 1)
        cout << "Korea";
    else
        cout << "Hanyang";
}
