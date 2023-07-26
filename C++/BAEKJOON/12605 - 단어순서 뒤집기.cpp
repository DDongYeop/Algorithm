#include <iostream>
#include <deque>
#include <sstream>

using namespace std;

int main()
{
    int input1;
    string input2, str;
    cin >> input1;
    getline(cin, input2);

    for (int i = 1; i <= input1; ++i)
    {
        getline(cin, input2);
        stringstream stream(input2);
        deque<string> deq;
        while (stream)
        {
            stream >> str;
            deq.push_front(str);
        }

        cout << "Case #" << i << ": ";
        deq.pop_front();        

        while (!deq.empty())
        {
            cout << deq.front() << ' ';
            deq.pop_front();
        }
        cout << '\n';
    }
}
