#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, loop;
    vector<int> vec;

    cin >> n;
    while (n--)
    {
        loop = 10;
        vec = vector<int>();
        while (loop--)
        {
            cin >> m;
            vec.push_back(m);
        }
        sort(vec.begin(), vec.end());
        cout << vec[7] << '\n';
    }
}
