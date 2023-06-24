#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int loop, index = 0;
    string str;
    cin >> loop;

    while (loop--)
    {
        cin >> str;
        unordered_map<char, int> um;
        for (int i = 0; i < str.size(); ++i)
        {
            if (um.find(str[i]) == um.end())
                um.insert(make_pair(str[i], i));
            else if (um[str[i]] == i - 1)
                um[str[i]] = i;
            else 
                break;

            if (i == str.size() - 1)
            {
                ++index;
                break;
            }
        }
    }

    cout << index;
    return 0;
}
