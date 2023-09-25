#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    string s;
    string result = s;
    cin >> N;
    cin >> s;

    for (int i = 1; i < N; i++)
    {
        string temp;
        cin >> temp;

        for (int j = 0; j < s.length(); j++)
            if (s[j] != temp[j])
                result[j] = '?';
    }

    cout << result << "\n";
    return 0;
}