#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int loop, input, index, answer = 0;
    priority_queue<int, vector<int>, greater<>> pq;
    cin >> loop;

    while (loop--)
    {
        cin >> input;
        pq.push(input);
    }
    
    while (pq.size() > 1)
    {
        index = pq.top();
        pq.pop();
        pq.push(index + pq.top());
        answer += index + pq.top();
        pq.pop();
    }

    cout << answer;
}
