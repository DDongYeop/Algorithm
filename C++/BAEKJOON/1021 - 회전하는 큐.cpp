#include <iostream>
#include <deque>
using namespace std;

int FrontFind(deque<int> deq, int find);
void DeleteFront(deque<int>& deq, int find, int& num);
int BackFind(deque<int> deq, int find);
void DeleteBack(deque<int>& deq, int find, int& num);


int main()
{
    int num = 0, input, input2, index;
    deque<int> deq;

    cin >> input;

    for (int i = 1; i <= input; ++i)
        deq.push_back(i);

    cin >> input;
    for (int i = 0; i < input; ++i)
    {
        cin >> input2;

        if (FrontFind(deq, input2) <= BackFind(deq, input2))
            DeleteFront(deq, input2, num);
        else
            DeleteBack(deq, input2, num);
    }

    cout << num;
    return 0;
}

int FrontFind(deque<int> deq, int find)
{
    int num = 0;

    while (deq.front() != find)
    {
        deq.push_front(deq.back());
        deq.pop_back();
        ++num;
    }

    return num;
}

void DeleteFront(deque<int>& deq, int find, int& num)
{
    while (deq.front() != find)
    {
        deq.push_front(deq.back());
        deq.pop_back();
        ++num;
    }
    deq.pop_front();
}

int BackFind(deque<int> deq, int find)
{
    int num = 0;

    while (deq.front() != find)
    {
        deq.push_back(deq.front());
        deq.pop_front();
        ++num;
    }

    return num;
}

void DeleteBack(deque<int>& deq, int find, int& num)
{
    while (deq.front() != find)
    {
        deq.push_back(deq.front());
        deq.pop_front();
        ++num;
    }
    deq.pop_front();
}