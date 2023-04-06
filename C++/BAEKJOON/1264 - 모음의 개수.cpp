#include <iostream>
using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        int index = 0;
        if (str == "#")
            break;
        
        for (int i = 0; i < str.length(); ++i)
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                ++index;
            else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                ++index;

        cout << index << '\n';
    }
}