#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int index = 0, input1, input2;
    string str;
    unordered_set<string> us;

    cin >> input1 >> input2;

    while (input1--)
    {
        cin >> str;
        us.insert(str);
    }

    while (input2--)
    {
        cin >> str;
        if (us.find(str) != us.end())
            ++index;
    }

    cout << index;
}
