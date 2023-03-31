#include <iostream>
using namespace std;

int Factorial(int index);

int main()
{
    int n;
    cin >> n;
    cout << Factorial(n);
}

int Factorial(int index)
{
    if (index < 2)
        return 1;
    return index * Factorial(index-1);
}
