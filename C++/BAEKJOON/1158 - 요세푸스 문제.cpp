#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n, k = 0, index = 0;
	queue<int> que;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
		que.push(i);

	cout << '<';
	while (que.size() != 1)
	{
		++index;
		if (k == index)
		{
			cout << que.front() << ", ";
			que.pop();
			index = 0;
		}
		else
		{
			que.push(que.front());
			que.pop();
		}
	}
	cout << que.front() << '>';
}
