#include <iostream>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        if (str == "END")
            break;
        for (int i = str.size()-1; i >= 0; --i)
            cout << str[i];
        cout << '\n';
    }
}
