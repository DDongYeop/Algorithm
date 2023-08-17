#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz)
{
    vector<string> answer;
    int x, y, z;
    string str1, str2;

    for (string s : quiz)
    {
        stringstream stream(s);
        stream >> x >> str1 >> y >> str2 >> z;

        if (str1 == "+")
        {
            if (x + y == z)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else
        {
            if (x - y == z)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }

    return answer;
}