#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int input; 
    bool isPrint = true;
    queue<int> que;
    cin >> input;
    for (int i = 1; i <= input; ++i) 
        que.push(i);

    while (!que.empty())
    {
        if (isPrint)
        {
            cout << que.front() << ' ';
            que.pop();
        }
        else
        {
            que.push(que.front());
            que.pop();
        }
        isPrint = !isPrint;
    }
    
}
