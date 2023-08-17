#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<int>> lines)
{
    int answer = 0;
    unordered_map<int, int> m;

    for (auto vec : lines)
    {
        for (int i = vec[0]; i < vec[1]; ++i)
            ++m[i];
    }

    for (auto pair : m)
    {
        if (pair.second > 1)
            ++answer;
    }

    return answer;
}