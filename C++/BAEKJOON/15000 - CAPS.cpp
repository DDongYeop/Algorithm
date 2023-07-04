#include <iostream>

using namespace std;

int main()
{
    string input;
    string result;
    cin >> input;

    for (char c : input)
    {
        result += c - 32;
    }

    cout << result;
}
