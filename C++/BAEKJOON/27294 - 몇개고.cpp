#include <iostream>

using namespace std;

int main()
{
    int input1, input2;
    cin >> input1 >> input2;

    if (11 < input1 && input1 < 17)
    {
        if (input2 == 0)
        {
            cout << 320;
            return 0;
        }
    }
    
    cout << 280;
    return 0;
}
