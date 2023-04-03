#include <iostream>

using namespace std;

int main()
{
    int m;
    double max = 0, index = 0;;
    cin >> m;
    int array[m];
    for (int i = 0; i < m; i++)
    {
        cin >> array[i];
        if (max < array[i])
            max = array[i];
    }

    for (int i = 0; i < m; i++)
        index += array[i]/max * 100;

    index /= m;
    cout << index;
}