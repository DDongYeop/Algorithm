#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cnt = 0;
    string str;

    while (true)
    {
        getline(cin, str);
        if (str == "0")
            return 0;
        cout << "Case " << ++cnt << ": Sorting... done!\n";
    }
}
