#include <iostream>

using namespace std;

int main()
{
    int loop, input1, input2, money = 0;
    cin >> loop;

    while (loop--)
    {
        cin >> input1 >> input2;
        switch (input1)
        {
            case 136:
                money += 1000;
                break;
            case 142:
                money += 5000;
                break;
            case 148:
                money += 10000;
                break;
            case 154:
                money += 50000;
                break;
        }
    }

    cout << money;
}
