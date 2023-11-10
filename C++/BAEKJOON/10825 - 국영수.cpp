#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

bool Compare(tuple<string, int, int, int> t1, tuple<string, int, int, int> t2);

int main()
{
    int loop, input1, input2, input3;
    string str;
    vector<tuple<string, int, int, int>> vec;

    cin >> loop;
    while (loop--)
    {
        cin >> str >> input1 >> input2 >> input3;
        vec.push_back(make_tuple(str, input1, input2, input3));
    }

    sort(vec.begin(), vec.end(), Compare);

    for (auto t : vec)
        cout << get<0>(t) << '\n';
}

bool Compare(tuple<string, int, int, int> t1, tuple<string, int, int, int> t2)
{
    if (get<1>(t1) < get<1>(t2))
        return false;
    else if (get<1>(t1) > get<1>(t2))
        return true;
    else
    {
        if (get<2>(t1) < get<2>(t2))
            return true;
        else if (get<2>(t1) > get<2>(t2))
            return false;
        else
        {
            if (get<3>(t1) < get<3>(t2))
                return false;
            else if (get<3>(t1) > get<3>(t2))
                return true;
            else
            {
                if (get<0>(t1) < get<0>(t2))
                    return true;
                else
                    return false;
            }
        }
    }
}
