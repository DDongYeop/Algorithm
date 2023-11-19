#include <iostream>
#include <string>

using namespace std;

int main()
{
    int loop;
    bool isYes = false;
    string str;
    cin >> loop;
    getline(cin, str);
    while (loop--)
    {
        getline(cin, str);
        if (str == "Never gonna give you up") {}
        else if (str == "Never gonna let you down") {}
        else if (str == "Never gonna run around and desert you") {}
        else if (str == "Never gonna make you cry") {}
        else if (str == "Never gonna say goodbye") {}
        else if (str == "Never gonna tell a lie and hurt you") {}
        else if (str == "Never gonna stop") {}
        else isYes = true;
    }

    if (isYes)
        cout << "Yes";
    else 
        cout << "No";
}
