#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, temp;
    cin >> n >> m;
    int array[n];

    for (int x = 0; x < n; x++)
        array[x] = x+1;
    
    for (int x = 0; x < m; x++)
    {
        cin >> i >> j;
        
        for (int y = 0; y < j-i/2; y++)
        {
            temp = array[i+y];
            array[i+y] = array[j-y];
            array[j-y] = temp;
        }
    }

    for (int x = 0; x < n; x++)
        cout << array[x] << ' ';
}