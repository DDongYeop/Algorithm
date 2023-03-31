#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, m;
    int i, j;
    cin >> n >> m;
    int array[n];

    for (int x = 0; x < n; x++)
        array[x] = x+1;
    
    for (int x = 0; x < m; x++)
    {
        cin >> i >> j;
        
        for (int y = 0; y < round((float)(j-i)/2); y++)
            swap(array[i+y-1], array[j-y-1]);
    }

    for (int x = 0; x < n; x++)
        cout << array[x] << ' ';
}