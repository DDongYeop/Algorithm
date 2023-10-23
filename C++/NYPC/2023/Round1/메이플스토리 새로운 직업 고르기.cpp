#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	int cnt;
	string str;
	unordered_map<string, int> um;
	vector<string> vec;

	cin >> cnt;
	while (cnt--)
	{
		cin >> str;
		um.insert(make_pair(str, 0)); // 0은 하지 않은 상태, 1은 한 상태 
	}

	cin >> cnt;
	while (cnt--)
	{
		cin >> str;
		um[str]++;
	}

	int a = 1;

	for (auto p : um)
	{
		if (p.second == 0)
			vec.push_back(p.first);
	}

	cout << vec.size() << '\n';
	for (auto s : vec)
		cout << s << '\n';

}
