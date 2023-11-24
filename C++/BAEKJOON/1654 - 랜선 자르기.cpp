#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BinarySearch();

int n;
vector<int> vec;

int main()
{
    int loop, input;

    cin >> loop >> n;
    while(loop--)
    {
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());
    cout << BinarySearch();
}

int BinarySearch()
{
    unsigned long long left = 1, right = vec.back() * n, center, sum;

    while (left <= right)
    {
        sum = 0;
        center = (left + right) / 2;
        for (auto i : vec)
            sum += i / center;

        if (sum >= n)
            left = center + 1;
        else
            right = center - 1;
    }

    return right;
}
