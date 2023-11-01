#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool Compare1(pair<int, int> i, pair<int, int> j);
bool Compare2(pair<string, int> i, pair<string, int> j);

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;
    vector<pair<int, int>> vec;
    vector<pair<string, int>> checkVec;
    map<string, int> countM;


    for (int i = 0; i < plays.size(); ++i)
    {
        vec.push_back(make_pair(plays[i], i));
        countM[genres[i]] += plays[i];
    }
    for (auto p1 : countM)
        checkVec.push_back(p1);

    sort(vec.begin(), vec.end(), Compare1);
    sort(checkVec.begin(), checkVec.end(), Compare2);

    for (auto p1 : checkVec)
    {
        int index = 0;
        for (auto p2 : vec)
        {
            if (genres[p2.second] == p1.first)
            {
                index++;
                if (index > 2)
                    break;
                answer.push_back(p2.second);
            }
        }
    }

    return answer;
}

bool Compare1(pair<int, int> i, pair<int, int> j)
{
    return j.first < i.first;
}

bool Compare2(pair<string, int> i, pair<string, int> j)
{
    return j.second < i.second;
}
