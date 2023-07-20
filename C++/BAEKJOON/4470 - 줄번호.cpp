#include <iostream>

using namespace std;

int main()
{
    int index;
    string str;
    cin >> index;

    cin.ignore();

    for (int i = 1; i <= index; ++i)
    {
        getline(cin, str);
        cin.clear();
        cout << i << ". " << str << '\n';
    }
}
