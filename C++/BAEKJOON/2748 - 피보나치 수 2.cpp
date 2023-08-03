#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    unsigned long arr[91] = { 0, 1 };

    for (int i = 2; i <= input; ++i)
        arr[i] = arr[i - 1] + arr[i - 2];

    cout << arr[input];
}
