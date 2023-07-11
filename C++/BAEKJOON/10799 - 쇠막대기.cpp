#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int index = 0;
    string str;
    stack<char> s;
    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '(')
        {
            if (str[i + 1] == ')')
            {
                index += s.size();
                ++i;
            }
            else
            {
                s.push(str[i]);
                ++index;
            }
        }
        else
            s.pop();
    }

    cout << index;
}
