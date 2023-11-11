#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, input;
    vector<int> vec;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());
    cout << vec[k - 1];
}
