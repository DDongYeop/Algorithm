#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int num, input, index = 0;
    stack<int> stk;
    vector<char> chVec;

    cin >> num;
    for (int i = 0; i < num; ++i)
    {
        cin >> input;
        while (stk.empty() || stk.top() < input )
        {
            ++index;
            stk.push(index);
            chVec.push_back('+');
        }
        if (stk.top() == input)
        {
            stk.pop();
            chVec.push_back('-');
        }
        else 
        {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < chVec.size(); ++i)
        cout << chVec[i] << '\n';

    return 0;
}