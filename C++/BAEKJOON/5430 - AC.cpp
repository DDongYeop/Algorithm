#include<iostream>
#include<deque>
using namespace std;

void DequeFlip(deque<int>& deq);

int main()
{
    string str, str2;
    int input, input2;
    bool isError = false;
    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        isError = false;
        deque<int> deq;
        cin >> str >> input2 >> str2;
        for (int j = 0; j < input2; ++j)
            deq.push_back((int)str2[1 + 2 * j] - '0');

        for (int j = 0; j < str.size(); ++j)
        {
            if (str[j] == 'R')
                DequeFlip(deq);
            else
            {
                if (deq.empty())
                {
                    isError = true;
                    break;
                }
                deq.pop_front();
            }
        }

        if (isError || deq.empty())
            cout << "error\n";
        else
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
    }
}

void DequeFlip(deque<int>& deq)
{
    int index = deq.size();
    deque<int> deq2;
    for (int i = 0; i < index; ++i)
    {
        deq2.push_front(deq.front());
        deq.pop_front();
    }
    deq = deq2;
}
