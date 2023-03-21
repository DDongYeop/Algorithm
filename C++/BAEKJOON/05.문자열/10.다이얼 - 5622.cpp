#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float sum = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        if(str[i] - 64 >= 19)
            sum += ceil(((float)str[i] - 65) / 3) + 2;
        else
            sum += ceil(((float)str[i] - 64) / 3) + 2;
        if (str[i] == 'Z')
            sum -= 1;
    }
    cout << sum;
}