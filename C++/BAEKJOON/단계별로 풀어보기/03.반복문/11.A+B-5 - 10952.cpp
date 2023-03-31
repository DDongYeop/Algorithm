#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(100);
    int index = 0;

    while (true)
    {
        float x, y;
        cin >> x >> y;

        if (x + y == 0)
            break;

        vec[index] = x + y;
        index++;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
            break;
        cout << vec[i] << endl;
    }
    
}