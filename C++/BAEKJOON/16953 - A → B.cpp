#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

int main()
{
    long long input1, input2;
    cin >> input1 >> input2;
    unordered_map<long long, int> um;
    queue<long long> q;

    q.push(input1);
    um[input1] = 1;

    while (!q.empty())
    {
        long long front = q.front();
        q.pop();

        if (front * 2 <= input2 && um[front * 2] == 0)
        {
            um[front * 2] = um[front] + 1;
            q.push(front * 2);
        }
        if (front * 10 + 1 <= input2 && um[front * 10 + 1] == 0)
        {
            um[front * 10 + 1] = um[front] + 1;
            q.push(front * 10 + 1);
        }
        if (front == input2)
            break;
    }

    if (um[input2] == 0)
        cout << -1;
    else
        cout << um[input2];
}
