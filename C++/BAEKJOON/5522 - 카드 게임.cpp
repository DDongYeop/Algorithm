#include <iostream>

using namespace std;

int main()
{
    int i = 5, input, answer = 0;
    while (i--)
    {
        cin >> input;
        answer += input;
    }
    
    cout << answer;
}
