#include <iostream>

using namespace std;

int main()
{
    unsigned long input;
    cin >> input;

    if (input % 2 == 0)
        cout << "CY";
    else 
        cout << "SK";

    return 0;
}