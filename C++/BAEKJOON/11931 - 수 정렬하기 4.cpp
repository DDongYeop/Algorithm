#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, input;
    vector<int> vec;

    cin >> n;
    while (n--)
    {
        cin >> input;
        vec.push_back(input);
    }
    sort(vec.begin(), vec.end(), greater<>());

    for(int i : vec)
        cout << i << '\n'; 
}
