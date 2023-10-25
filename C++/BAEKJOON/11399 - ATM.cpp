#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int loop, input, container = 0, answer = 0;
    priority_queue<int, vector<int>, greater<>> pq;
    cin >> loop;

    while (loop--)
    {
        cin >> input;
        pq.push(input);
    }

    while (!pq.empty())
    {
        int front = pq.top();
        pq.pop();

        container += front;
        answer += container;
    }

    cout << answer;
}
