#include <string>
#include <vector>

using namespace std;

string solution(string new_id) 
{
    string answer = "";

	for (int i = 0; i < new_id.length(); i++)
		new_id[i] = tolower(new_id[i]);

	for (int i = 0; i < new_id.size(); i++)
		if (new_id[i] >= 'a' && new_id[i] <= 'z' || new_id[i] >= '0' && new_id[i] <= '9' || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
			answer += new_id[i];

	for (int i = 0; i < answer.size() - 1; i++)
	{
		if (answer[i] == '.' && answer[i + 1] == '.')
		{
			answer.erase(i, 1);
			i--;
		}
	}

	if (answer.front() == '.')
		answer.erase(0, 1);
	if (answer.back() == '.')
		answer.pop_back();

	if (answer.empty())
		answer = 'a';

	while (answer.length() > 15)
		answer.erase(answer.length() - 1, 1);

	if (answer.back() == '.')
		answer.pop_back();

    if (answer.size() <= 2)
		while (answer.size() < 3)
			answer += answer.back();
    
	return answer;
}