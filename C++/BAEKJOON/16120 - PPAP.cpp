#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str, find = "PPAP", answer = "";
    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        answer += str[i];
        if (answer.size() >= find.size())
        {
            bool flag = true;
            for (int j = 0; j < find.size(); ++j)
            {
                if (answer[answer.size() - find.size() + j] != find[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                answer.replace(answer.end() - find.size(), answer.end(), "P");
        }
    }

    if (answer == "" || answer == "P")
        cout << "PPAP";
    else
        cout << "NP";
}