#include <iostream>
#include <string>

using namespace std;

int main()
{
    int loop, index = 0;
    string str;

    cin >> loop;
    while (loop--)
    {
        cin >> str;
        int idx = stoi(str.substr(2));
        if (idx <= 90)
            ++index;
    }
    cout << index;
}
