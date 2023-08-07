#include <iostream>

using namespace std;

int main()
{
    int input;
    int arr[100001] { 1, 3 };

    cin >> input;

    for (int i = 2; i <= input; ++i)
        arr[i] = (arr[i-1] * 2 + arr[i-2]) % 9901;

    cout << arr[input];
}