#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<>> pq;
    int input, input2;
    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        cin >> input2;
        pq.push(input2);
    }

    while (!pq.empty())
    {
        cout << pq.top() << '\n';
        pq.pop();
    }
}
