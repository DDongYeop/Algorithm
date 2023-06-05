#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    int input, x, y;
    cin >> input;
    
    while (input != 0)
    {
        --input;
        cin >> x >> y;
        pq.push(make_pair(x, y));
    }

    while (!pq.empty())
    {
        cout << pq.top().first << ' ' << pq.top().second << '\n';
        pq.pop();
    }
}