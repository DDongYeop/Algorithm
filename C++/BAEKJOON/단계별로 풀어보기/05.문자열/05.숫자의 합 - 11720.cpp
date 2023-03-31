#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, value = 0;
    string str;
    cin >> num >> str;
    for (int i = 0; i < num; i++)
        value += str[i] - '0';

    cout << value;
}