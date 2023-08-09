#include <iostream>

using namespace std;

int main()
{
    string str;
    float answer = 0;
    cin >> str;

    switch (str[0])
    {
        case 'A':
            answer += 4.0f;
            break;
        case 'B':
            answer += 3.0f;
            break;
        case 'C':
            answer += 2.0f;
            break;
        case 'D':
            answer += 1.0f;
            break;
        case 'F':
            cout << "0.0";
            return 0;
    }

    switch (str[1])
    {
        case '+':
            answer += 0.3f;
            break;
        case '-':
            answer -= 0.3f;
            break;
        case '0':
            cout << answer << ".0";
            return 0;
    }

    cout.precision(2);
    cout << answer;
}