#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;

    cin >> n;

    while (n--)
    {
        cin >> str;
        if (str == "Algorithm")
            cout << 204 << '\n';
        else if (str == "DataAnalysis")
            cout << 207 << '\n';
        else if (str == "ArtificialIntelligence")
            cout << 302 << '\n';
        else if (str == "CyberSecurity")
            cout << "B101" << '\n';
        else if (str == "Network")
            cout << 303 << '\n';
        else if (str == "Startup")
            cout << 501 << '\n';
        else if (str == "TestStrategy")
            cout << 105 << '\n';
    }
}
