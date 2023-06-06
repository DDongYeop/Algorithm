#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<string> vec;
    int input, x;
    string y;
    cin >> input;
    
    for (int i = 0; i < input; ++i)
    {
        cin >> x >> y;
        pq.push(make_pair(x, i));
        vec.push_back(y);
    }

    while (!pq.empty())
    {
        cout << pq.top().first << ' ' << vec[pq.top().second] << '\n';
        pq.pop();
    }
}