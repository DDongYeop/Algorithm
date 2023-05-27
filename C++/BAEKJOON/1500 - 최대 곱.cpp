#include<iostream>
using namespace std;

int main()
{
    long long input1, input2, x, y, answer = 1;
    cin >> input1 >> input2;

    x = input1 / input2;
    y = input1 % input2;

    for (int i = 0; i < input2; ++i)
    {
        if (y > 0)
        {
            answer *= (x + 1);
            --y;
        }
        else 
            answer *= x;
    }
    cout << answer;
    return 0;
}
