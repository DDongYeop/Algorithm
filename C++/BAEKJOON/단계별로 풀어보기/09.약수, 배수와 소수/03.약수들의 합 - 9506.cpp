#include <iostream>
using namespace std;

int main()
{
    int n, index = 0;
    
    while (cin >> n)
    {
        if (n == -1)
            return 0;
        if (n % 2 != 0)
        {
            cout << n << " is NOT perfect.\n";
            continue;
        }
        index = 0;
        for (int i = 1; i < n / 2; ++i)
            if (n % i == 0)
                index += i;
        if (index == n /2)
        {
            cout << n << " = ";
            for (int i = 1; i < n / 2; ++i)
                if (n % i == 0)
                    cout << i << " + ";
            cout << n/2 << '\n';
            continue;
        }
        else 
        {
            cout << n << " is NOT perfect.\n";
            continue;
        }
    }
}