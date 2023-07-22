#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int input1, input2;
    priority_queue<int, vector<int>, greater<>> pq;
    cin >> input1;

    for (int i = 1; i <= input1; ++i)
    {
        for (int j = 1; j <= input1; ++j)
        {
            cin >> input2;
            pq.push(input2);
            if (pq.size() > input1)
                pq.pop();
        }
    }

    cout << pq.top();
    return 0;
}
