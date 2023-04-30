#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int num, index = 0;
    bool isAscending, isDescending;
    isAscending = isDescending = true;

    for (int i = 0; i < 8; ++i)
    {
        cin >> num;
        if (index == 0)
            index = num;
        else
        {
            if (index + 1 != num)
                isAscending = false;
            if (index - 1 != num)
                isDescending = false;
            index = num;
        }
    }

    if (isAscending)
        cout << "ascending";
    else if (isDescending)
        cout << "descending";
    else 
        cout << "mixed";
}
