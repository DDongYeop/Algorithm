#include <iostream>
using namespace std;

int GetNumber(int number, int count)
{
    int times = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            ++times;
        if (times == count)
            return i;
    }

    return 0;
}

int main() 
{
    int number, count;
    cin >> number >> count;

    cout << GetNumber(number, count);

    return 0;
}
