#include <bits/stdc++.h>

using namespace std;

int main()
{
    double input;
    while(1)
    {
        cin >> input;
        if(input == 0) 
            break;
        printf("%.2f\n", 1 + input + pow(input, 2) + pow(input, 3) + pow(input, 4));
    }
}
