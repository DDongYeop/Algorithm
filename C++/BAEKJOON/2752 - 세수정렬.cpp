#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int input;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < 3; ++i)
    {
        cin >> input;
        pq.push(input);
    }
    
    for (int i = 0; i < 3; ++i)
    {
        cout << pq.top() << ' ';
        pq.pop();
    }
}