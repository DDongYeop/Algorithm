#include <iostream>

using namespace std;

int main()
{
    int loop = 8, first = 0, second = 0;
    string str;

    while (loop--)
    {
        cin >> str;

        for (char c : str)
        {
            switch (c)
            {
                case 'p':
                    first += 1;
                    break;
                case 'n':
                case 'b':
                    first += 3;
                    break;
                case 'r':
                    first += 5;
                    break;
                case 'q':
                    first += 9;
                    break;
                case 'P':
                    second += 1;
                    break;
                case 'N':
                case 'B':
                    second += 3;
                    break;
                case 'R':
                    second += 5;
                    break;
                case 'Q':
                    second += 9;
                    break;
            }
        }
    }

    cout << second - first;
}
