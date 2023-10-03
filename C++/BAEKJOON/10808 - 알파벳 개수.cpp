#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector<int> vec(26, 0);
    cin >> str;

    for (int i : str)
        vec[i-97]++;

    for (int i : vec)
        cout << i << ' ';
}
