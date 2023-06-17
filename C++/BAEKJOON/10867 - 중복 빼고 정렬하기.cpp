#include <iostream>
#include <set>

using namespace std;

int main()
{
    int loop, input;
    set<int> us;
    cin >> loop;

    for (int i = 0; i < loop; ++i)
    {
        cin >> input;
        us.insert(input);
    }

    for (auto s : us)
        cout << s << ' ';
}
