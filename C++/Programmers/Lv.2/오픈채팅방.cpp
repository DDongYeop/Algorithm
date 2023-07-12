#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record)
{
    map<string, string> idName;
    vector<pair<string, string>> log;
    vector<string> answer;
    string state, id, name;

    for (auto str : record)
    {
        stringstream stream(str);
        stream >> state;
        stream >> id;
        stream >> name;

        switch (state[0])
        {
        case 'E':
            if (idName.find(id) == idName.end())
                idName.insert(make_pair(id, name));
            idName[id] = name;
        case 'L':
            log.push_back(make_pair(id, state));
            break;
        default:
            idName[id] = name;
            break;
        }
    }

    for (int i = 0; i < log.size(); ++i)
    {
        answer.push_back(idName[log[i].first] + "님이 ");
        answer[i] += log[i].second == "Enter" ? "들어왔습니다." : "나갔습니다.";
    }

    return answer;
}
