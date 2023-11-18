#include <iostream>

using namespace std;

int main()
{
    int loop, time = -8, input;

    cin >> loop;
    while (loop--)
    {
        time += 8;
        cin >> input;
        time += input;
    }
    
    cout << time / 24 << ' ' << time % 24;
}
