#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int loop, input;
    stack<int> stk;
    cin >> loop;

    for (int i = 0; i < loop; ++i)
    {
        cin >> input;
        
        if (stk.empty())
            stk.push(input);
        else
        {
            while (stk.top() <= input)
            {
                stk.pop();
                if (stk.empty())
                    break;
            }
            stk.push(input);
        }
    }
    cout << stk.size();
}
