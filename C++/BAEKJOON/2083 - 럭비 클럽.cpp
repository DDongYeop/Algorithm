#include <iostream>
using namespace std;

int main()
{
    string str;
    int age, weight;

    while (cin >> str >> age >> weight)
    {
        if (str == "#")
            break;
        
        cout << str;
        if (age > 17 || weight >= 80)
            cout << " Senior" << endl;
        else
            cout << " Junior" << endl;
    }
    
}