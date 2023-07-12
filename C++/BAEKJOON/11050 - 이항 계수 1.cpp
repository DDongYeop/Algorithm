#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    int n, k;
    cin >> n >> k;
    cout << factorial(n) / (factorial(k) * factorial(n - k));
}

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
