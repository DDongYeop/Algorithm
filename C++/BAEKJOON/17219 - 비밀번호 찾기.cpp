#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> um;
    string str1, str2;
    int loop1, loop2;

    cin >> loop1 >> loop2;

    while (loop1--)
    {
        cin >> str1 >> str2;
        um.insert(make_pair(str1, str2));
    }

    while (loop2--)
    {
        cin >> str1;
        cout << um[str1] << '\n';
    }
}
