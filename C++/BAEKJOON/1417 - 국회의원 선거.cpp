#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int loop, input, dasom;
    priority_queue<int, vector<int>, less<int>> pq;
    cin >> loop >> dasom;

    if (loop == 1)
    {
        cout << 0;
        return 0;
    }

    while (--loop)
    {
        cin >> input;
        pq.push(input);
    }

    while (pq.top() >= dasom)
    {
        ++loop;
        int top = pq.top();
        pq.pop();
        pq.push(--top);
        ++dasom;
    }

    cout << loop;
    return 0;
}
