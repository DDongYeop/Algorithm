#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int loop1, loop2, answer;
    string str1, str2;
    cin >> loop1;

    while (loop1--)
    {
        unordered_map<string, int> um;
        answer = 1;
        cin >> loop2;
        while (loop2--)
        {
            cin >> str1 >> str2;
            um[str2]++;
        }
        for (auto p : um)
            answer *= p.second + 1;

        cout << answer - 1 << '\n';
    }
}