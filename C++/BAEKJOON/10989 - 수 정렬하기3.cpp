#include <iostream>

using namespace std;

int main() 
{
    int n;
    int arr[10001] = { 0 };
    cin >> n;

    for(int i = 0; i < n; i++) 
    {
        int in;
        cin >> in;
        arr[in]+=1;
    }

    for (int i = 1; i < 10001; i++) 
    {
        for (int j = 0; j < arr[i]; j++) 
            cout << i << '\n';
    }
}
