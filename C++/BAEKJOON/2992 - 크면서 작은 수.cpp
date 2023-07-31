#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int input, result = 1000001;
string str;
unordered_set<string> us;

void BackTracking(string str);

int main()
{
    cin >> input;
    str = to_string(input);

    BackTracking(str);

    if (result == 1000001)
        cout << 0;
    else
        cout << result;
}

void BackTracking(string str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        for (int j = 0; j < str.size(); ++j)
        {
            string str2 = str;
            swap(str2[i], str2[j]);

            if (us.find(str2) != us.end())
                break;

            us.insert(str2);

            if (stoi(str2) > input)
            {
                if (result > stoi(str2))
                    result = stoi(str2);
            }

            BackTracking(str2);
        }
    }
}
