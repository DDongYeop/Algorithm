#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    int input;
    string str, last;
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<>> pq;
    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        cin >> str;
        pq.push(make_pair(str.size(), str));
    }

    while (!pq.empty())
    {
        if (last != pq.top().second)
            cout << pq.top().second << '\n';
        last = pq.top().second;
        pq.pop();
    }
}
