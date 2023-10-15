#include <iostream>

using namespace std;

int main()
{
    int input1, input2, price;
    cin >> input1 >> input2 >> price;
    price += price;

    if (input1 + input2 - price >= 0)
        cout << input1 + input2 - price;
    else
        cout << input1 + input2;
}
