#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int input;
    cin >> input;
    vector<int> p(input+1), maxP(input+1);

    for (int i = 1; i <= input; ++i)
        cin >> p[i];

    maxP[1] = p[1];

    for (int i = 2; i <= input; ++i)
        for (int j = 1; j <= i; ++j)
            maxP[i] = max(maxP[i], maxP[i-j] + p[j]);

    cout << maxP[input];
}
