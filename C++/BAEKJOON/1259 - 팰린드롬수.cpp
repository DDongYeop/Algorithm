#include<iostream>
using namespace std;

int main()
{
    string str, input;

    while (cin >> input)
    {
        if (input == "0")
            return 0;
        str = "";

        for (int i = input.size() - 1; i >= 0; --i)
            str += input[i];

        if (str == input)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}