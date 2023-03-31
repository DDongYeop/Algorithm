#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string num;
    int n;
    cin >> num >> n;

    int sum(0);
    for (int i = 0; i < num.length(); i++)
    {
        int tmp = num[num.length() - (i + 1)];
        if ('0' <= tmp && tmp <= '9')
            tmp = tmp - '0';
        else
            tmp = tmp + 10 - 'A';
        sum += (tmp * (int)pow(n, i));
    }
    cout << sum << '\n';
}