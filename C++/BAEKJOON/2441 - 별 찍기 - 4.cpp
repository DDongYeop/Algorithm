#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;
    for (int i = num; i > 0; --i)
    {
        for (int j = num; j > 0; --j)
        {
            if (i >= j)
                cout << '*';
            else 
                cout << ' ';
        }
        cout << '\n';
    }
}
