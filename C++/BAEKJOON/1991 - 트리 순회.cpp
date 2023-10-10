#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> vec;

void PreorderTraverse(int index);
void InorderTraverse(int index);
void PostorderTraverse(int index);

int main()
{
    int index;
    char c1, c2, c3;
    cin >> index;
    vec.resize(index, vector<int>(2, -1));

    while (index--)
    {
        cin >> c1 >> c2 >> c3;
        if (c2 != '.')
            vec[c1 - 'A'][0] = (c2 - 'A');
        if (c3 != '.')
            vec[c1 - 'A'][1] = (c3 - 'A');
    }

    PreorderTraverse(0);
    cout << '\n';
    InorderTraverse(0);
    cout << '\n';
    PostorderTraverse(0);
}

void PreorderTraverse(int index)
{
    cout << (char)(index + 'A');
    if (vec[index][0] != -1)
        PreorderTraverse(vec[index][0]);
    if (vec[index][1] != -1)
        PreorderTraverse(vec[index][1]);
}

void InorderTraverse(int index)
{
    if (vec[index][0] != -1)
        InorderTraverse(vec[index][0]);
    cout << (char)(index + 'A');
    if (vec[index][1] != -1)
        InorderTraverse(vec[index][1]);
}

void PostorderTraverse(int index)
{
    if (vec[index][0] != -1)
        PostorderTraverse(vec[index][0]);
    if (vec[index][1] != -1)
        PostorderTraverse(vec[index][1]);
    cout << (char)(index + 'A');
}
