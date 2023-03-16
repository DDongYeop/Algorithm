#include <iostream>
#include <string>

using namespace std;

int main()
{
    int index;
    cin >> index;
    string str[index];

    for (int i = 0; i < index; i++)
        cin >> str[i];
    for (int i = 0; i < index; i++)
        cout << str[i][0] << str[i][str[i].size()-1] << endl;
}