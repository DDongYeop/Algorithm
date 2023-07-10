#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int input, input2;
    unordered_map<int, int> um;
    cin >> input;

    while (input--)
    {
        cin >> input2;
        if (um.find(input2) == um.end())
            um.insert(make_pair(input2, 1));
        else
            ++um[input2];
    }

    cin >> input;
    while (input--)
    {
        cin >> input2;
        if (um.find(input2) == um.end())
            cout << 0 << ' ';
        else
            cout << um[input2] << ' ';
    }
}
