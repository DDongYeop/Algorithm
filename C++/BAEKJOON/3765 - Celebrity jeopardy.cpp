#include <iostream>

using namespace std;

int main() 
{
    string str;
    
    while (1) 
    {
        getline(cin, str);
        if (cin.eof()) 
            break;
        cout << str << "\n";
    }
    return 0;
}