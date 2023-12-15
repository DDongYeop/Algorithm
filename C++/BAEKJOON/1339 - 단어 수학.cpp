#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, answer = 0, value = 10;
    string input;
    vector<int> cntVec(26, 0);

    cin >> n;
    while (n--)
    {
        int value = 1;
        cin >> input;
        for (int i = input.size() - 1; i >= 0; --i)
        {
            cntVec[input[i] - 65] += value;
            value *= 10;
        }
    }

    sort(cntVec.begin(), cntVec.end(), greater<int>());

    for (auto i : cntVec)
    {
        if (i == 0)
            break;
        --value;
        answer += i * value;
    }

    cout << answer;
}
