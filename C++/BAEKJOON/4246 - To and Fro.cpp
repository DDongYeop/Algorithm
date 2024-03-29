#include <iostream>

using namespace std;

int main()
{
    string message;
    int column;

    while (cin >> column)
    {
        if (!column)
            break;

        cin >> message;

        for (int i = 0; i < column; ++i)
        {
            for (int j = 0; j < message.size() / column; ++j)
            {
                if (j % 2)
                    cout << message[(j + 1) * column - i - 1];
                else
                    cout << message[j * column + i];
            }
        }

        cout << '\n';
    }
}