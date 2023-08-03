#include <iostream>

using namespace std;

int main()
{
    int input, input2;
    unsigned int arr[41] = { 0, 1 };
    cin >> input;

    for (int i = 2; i < 41; ++i)
        arr[i] = arr[i - 1] + arr[i - 2];

    while (input--)
    {
        cin >> input2;

        if (input2 == 0)
            cout << "1 0";
        else
            cout << arr[input2 - 1] << ' ' << arr[input2];
        cout << '\n';
    }
}
