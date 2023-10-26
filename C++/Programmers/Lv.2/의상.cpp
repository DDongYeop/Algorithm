#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    unordered_map<string, int> um;
    vector<int> vec;
    int answer = 1;

    for (vector<string> vec : clothes)
        um[vec[1]]++;

    for (auto p : um)
        answer *= p.second + 1;

    return answer - 1;
}