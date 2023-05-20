#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int loop, input;
    queue<int> que;
    string str;
    cin >> loop;

    for (int i = 0; i < loop; ++i)
    {
        cin >> str;

        if (str == "push")
        {
            cin >> input;
            que.push(input);
        }
        else if (str == "pop")
        {
            if (que.empty())
                cout << "-1" << '\n';
            else
            {
                cout << que.front() << '\n';
                que.pop();
            }
        }
        else if (str == "size")
            cout << que.size() << '\n';
        else if (str == "empty")
            cout << que.empty() << '\n';
        else if (str == "front")
        {
            if (que.empty())
                cout << "-1" << '\n';
            else
                cout << que.front() << '\n';
        }
        else if (str == "back")
        {
            if (que.empty())
                cout << "-1" << '\n';
            else
                cout << que.back() << '\n';
        }
    }

    return 0;
}