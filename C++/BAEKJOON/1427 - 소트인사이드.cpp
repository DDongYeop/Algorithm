#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<char> pq;
    string str;
    cin >> str;
    
    for (char c : str)
        pq.push(c);

    while (!pq.empty())
    {
        cout << pq.top();
        pq.pop();
    }
}
