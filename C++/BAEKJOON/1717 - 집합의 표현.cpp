#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;

int Find(int x);
void Merge(int x, int y);
bool IsUnion(int x, int y);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, input, a, b;
    cin >> n >> m;

    for (int i = 0; i <= n; ++i)
        vec.push_back(i);

    while (m--)
    {
        cin >> input >> a >> b;

        if (input == 1)
        {
            if (IsUnion(a, b))
                cout << "YES";
            else
                cout << "NO";
            cout << '\n';
        }
        else
            Merge(a, b);
    }
}

int Find(int x)
{
    if (vec[x] == x)
        return x;
    return vec[x] = Find(vec[x]);
}

void Merge(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x == y)
        return;

    vec[y] = x;
}

bool IsUnion(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x == y)
        return true;
    else
        return false;
}
