#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int index[n * 2];
    for (int i = 0; i < n; i++)
        cin >> index[i] >> index[n+i];

    for (int i = 0; i < n; i++)
    {
        cout << index[i] + index[i+n] << endl;
    }
}