#include<iostream>
using namespace std;

int main()
{
    int result = 0, input;
    for (int i = 0; i < 5; ++i)
    {
        cin >> input;
        result += input * input;
    } 
    cout << result % 10;

    return 0;
}
