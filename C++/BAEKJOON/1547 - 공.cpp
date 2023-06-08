#include <iostream>

using namespace std;

int main()
{
    int input, x, y;
    int arr[4] = { 0, 1, 2, 3 };
    cin >> input;


    for (int i = 0; i < input; ++i)
    {
        cin >> x >> y;
        swap(arr[x], arr[y]);
    }
    
    for (int i = 1; i < 4; ++i)
        if (arr[i] == 1) 
            cout << i;
}
