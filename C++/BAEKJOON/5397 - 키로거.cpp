#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    string str;
    int num, index;
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        list<char> li;
        list<char>::iterator iter = li.begin();
        cin >> str;
        for (int j = 0; j < str.size(); ++j)
        {
            switch (str[j])
            {
            case '<':
                if (iter != li.end())
                    ++iter;
                break;
            case '>':
                if (iter != li.begin())
                    --iter;
                break;
            case '-':
                if (iter != li.end())
                    iter = li.erase(iter);
                break;
            default:
                iter = li.insert(iter, str[j]);
                break;
            }
        }
        li.reverse();

        for (auto l : li)
            cout << l;
        cout << '\n';
    }

    return 0;
}
