#include <iostream>

using namespace std;

int main()
{
    int n, answer;
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;
        answer = 0;
        for (int i = 0; i <= n; ++i)
            answer += i;
        cout << answer << '\n';
    }
}
