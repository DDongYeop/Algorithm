#include <iostream>
using namespace std;

long Factorial(long index);

int main()
{
    long n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}

long Factorial(long index)
{
    if (index < 2)
        return 1;
    return index * Factorial(index-1);
}
