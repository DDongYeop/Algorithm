#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    string str;
    cin >> str;

    for (int i = 0; i < str.size()-1 % 2; ++i)
            if (str[i] != str[str.size()-1-i])
                index = 0;

    cout << index;
}