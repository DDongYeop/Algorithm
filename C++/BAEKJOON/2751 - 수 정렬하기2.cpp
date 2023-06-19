#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int loop, input;
    priority_queue<int, vector<int>, greater<>> pq;
    cin >> loop;

    for (int i = 0; i < loop; ++i)
    {
        cin >> input;
        pq.push(input);
    }

    while (!pq.empty())
    {
        cout << pq.top() << '\n';
        pq.pop();
    }
}
