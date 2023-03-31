#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num != 1)
    {
        for (int i = 2; i <= num; ++i)
        {
            if (num % i == 0)
            {
                cout << i << '\n';
                num /= i;
                break;
            }
            else if (num == i)
                return 0;
        }   
    }
}