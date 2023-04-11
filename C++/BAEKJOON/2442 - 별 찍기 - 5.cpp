#include <iostream>
using namespace std;

int main()
{
    int index;
    cin >> index;

    for (int i = index-1; i >= 0; --i)
    {
        for (int j = i; j > 0; --j)
            cout << ' ';
        cout << '*';
        for (int z = i; z < index-1; ++z)
            cout << "**";
        cout << '\n';
    }
}