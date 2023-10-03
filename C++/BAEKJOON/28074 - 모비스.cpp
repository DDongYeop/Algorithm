#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input;
    vector<int> vec(128, 0);
    cin >> input;

    for (auto c : input)
        vec[c]++;


    if (vec[77] && vec[79] && vec[73] && vec[83] && vec[66])
        cout << "YES";
    else
        cout << "NO";
}
