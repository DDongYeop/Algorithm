#include <iostream>

using namespace std;

int main()
{
    int n, m = 3, input, answer = 0;
    cin >> n;

    while (m--)
    {
        cin >> input;
        if (input > n)
            input = n;
        answer += input;    
    }
    cout << answer;
}
