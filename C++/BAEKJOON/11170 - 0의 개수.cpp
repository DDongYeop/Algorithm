#include <iostream>

using namespace std;

int main()
{
    int loop, input1, input2, index;
    cin >> loop;

    while (loop--)
    {
        index = 0;
        cin >> input1 >> input2;
        for (int i = input1; i <= input2; ++i)
        {
            for (char c : to_string(i))
            {
                if (c == '0')
                    ++index;
            }
        }
        cout << index << '\n';
    }
}
