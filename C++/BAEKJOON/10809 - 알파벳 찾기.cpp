#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char ch = 'a'; ch <= 'z'; ch++)
        cout << (int)s.find(ch) << ' ';
}