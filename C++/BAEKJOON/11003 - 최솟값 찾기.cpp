#include<iostream>
#include<utility>
#include<queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    int n, l, num, j;
    cin >> n >> l;

    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        pq.push(make_pair(num, i));
        while (i - l >= pq.top().second)
            pq.pop();
        cout << pq.top().first << ' ';
    }
}
