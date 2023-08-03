#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[9];
vector<int> printVec;
bool visited[9];

void BackTracking(int n, int m, int cnt);

int main()
{
    int n, m, input;
    cin >> n >> m;
    printVec.push_back(-2147483647);
    for (int i = 1; i <= n; ++i)
    {
        cin >> input;
        printVec.push_back(input);
    }
    sort(printVec.begin(), printVec.end());

    BackTracking(n, m, 0);
}

void BackTracking(int n, int m, int cnt)
{
    int last = 0;

    if (cnt == m)
    {
        for (int i = 0; i < cnt; ++i)
            cout << printVec[arr[i]] << ' ';
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            if (visited[i] || last == printVec[i])
                continue;
            arr[cnt] = i;
            visited[i] = true;
            last = printVec[i];
            BackTracking(n, m, cnt + 1);
            visited[i] = false;
        }
    }
}
