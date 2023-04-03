#include <iostream>
#include <string>
using namespace std;

int main()
{
    int index = 1;
    string str;
    getline(cin, str);
    
    for (int i = 0; i < str.size(); i++)
        if (str[i] == ' ')
            index++;

    if (str[0] == ' ')
        index--;
    if (str[str.size()-1] == ' ')
        index--;

    cout << index;
}