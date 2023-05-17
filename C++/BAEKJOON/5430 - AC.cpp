#include<iostream>
#include<deque>
using namespace std;

int main()
{
    string str, str2;
    int input, input2, strIndex = 1, pushIndex = 0;
    bool isError = false, isReverse = false;
    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        isError = isReverse = false;
        deque<int> deq;
        cin >> str >> input2 >> str2;
        pushIndex = 0;
        strIndex = 1;
        while (true)
        {
            if (str2[strIndex] == ',')
            {
                ++strIndex;
                deq.push_back(pushIndex);
                pushIndex = 0; 
                continue;
            }
            else if (str2[strIndex] == ']')
            {
                if (pushIndex != 0)
                    deq.push_back(pushIndex);
                break;
            }

            pushIndex *= 10;
            pushIndex += (int)str2[strIndex] - '0';
            ++strIndex;
        }

        for (int j = 0; j < str.size(); ++j)
        {
            if (str[j] == 'R')
                isReverse = !isReverse;
            else
            {
                if (deq.empty())
                {
                    isError = true;
                    break;
                }
                if (!isReverse)
                    deq.pop_front();
                else
                    deq.pop_back();
            }
        }

        if (isError)
            cout << "error\n";
        else if (deq.empty())
            cout << "[]\n";
        else if (!isReverse)
        {
            cout << '[' << deq.front();
            deq.pop_front();
            while (!deq.empty())
            {
                cout << ',' << deq.front();
                deq.pop_front();
            }
            cout << "]\n";
        }
        else
        {
            cout << '[' << deq.back();
            deq.pop_back();
            while (!deq.empty())
            {
                cout << ',' << deq.back();
                deq.pop_back();
            }
            cout << "]\n";
        }
    }
}
