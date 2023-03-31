#include <iostream>

using namespace std;

int main()
{
    int currMoney, index;
    
    cin >> currMoney >> index;
    int moneies[index];
    int indexes[index];
    int money = 0;
    
    for (int i = 0 ; i < index; i++)
    {
        cin >> moneies[i] >> indexes[i];
        money += moneies[i] * indexes[i];
    }
    
    if (currMoney == money)
        cout << "Yes";
    else 
        cout << "No";
}