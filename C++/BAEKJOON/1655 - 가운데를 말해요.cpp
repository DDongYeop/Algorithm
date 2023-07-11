#include <iostream>
#include <queue>

using namespace std;

void BigToLittle(int index);
void LittleToBig(int index);

priority_queue<int> big;
priority_queue<int, vector<int>, greater<>> little;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int input, input2;
    cin >> input;

    while (input--)
    {
        cin >> input2;

        if (big.empty())
        {
            big.push(input2);
        }
        else if (little.empty())
        {
            if (input2 < big.top())
                BigToLittle(input2);
            else
                little.push(input2);
        }
        else if (big.size() < little.size())
        {
            if (little.top() > input2)
                big.push(input2);
            else
                LittleToBig(input2);
        }
        else if (big.size() > little.size())
        {
            if (big.top() >= input2)
                BigToLittle(input2);
            else
                little.push(input2);
        }
        else
        {
            if (little.top() > input2)
                big.push(input2);
            else
                LittleToBig(input2);
        }
        cout << big.top() << '\n';
    }
}

void BigToLittle(int index)
{
    little.push(big.top());
    big.pop();
    big.push(index);
}

void LittleToBig(int index)
{
    big.push(little.top());
    little.pop();
    little.push(index);
}
