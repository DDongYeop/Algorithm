#include <iostream>

using namespace std;

int main()
{
    int n, arr[4];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        if (i == 0)
            cout << "Gnomes:\n";
        if (arr[0] <= arr[1] && arr[1] <= arr[2])
            cout << "Ordered\n";
        else if (arr[0] >= arr[1] && arr[1] >= arr[2])
            cout << "Ordered\n";
        else
        cout << "Unordered\n";
    }
    return 0;
}