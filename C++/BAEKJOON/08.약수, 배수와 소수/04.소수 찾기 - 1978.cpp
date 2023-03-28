#include <iostream>
using namespace std;

int main()
{
    int n, index, num = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> index;
        for (int i = 2; i <= index; ++i)
        {
            if (index == i)
            {
                ++num;
                break;
            }
            else if (index % i  ==0)
                break;
        }
    }
    cout << num;
}