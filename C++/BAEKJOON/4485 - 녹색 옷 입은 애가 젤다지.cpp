#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int RoadInput(int index);
int Road();

int dirX[4] = { -1, 1, 0, 0 };
int dirY[4] = { 0, 0, -1, 1 };

vector<vector<int>> map;
vector<vector<int>> dist;
int answer, input;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num = 0;

	while (cin >> input)
	{
		if (input == 0)
			break;

		++num;
		RoadInput(input);
		cout << "Problem " << num << ": " << dist[input-1][input - 1] << endl;
	}

	return 0;
}

int RoadInput(int index)
{
	int num;
	
	map = vector<vector<int>>();
	dist = vector<vector<int>>();
	answer = 2147483647;

	for (int i = 0; i < index; ++i)
	{
		map.push_back(vector<int>());
		dist.push_back(vector<int>());
		for (int j = 0; j < index; ++j)
		{
			cin >> num;
			map[i].push_back(num);
			dist[i].push_back(2147483647);
		}
	}

	Road();
	return 0;
}

int Road()
{
	priority_queue<pair<int, pair<int, int>>> pq;
	pq.push(make_pair(-map[0][0], make_pair(0, 0)));
	dist[0][0] = map[0][0];

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int x = pq.top().second.first;
		int y = pq.top().second.second;
		pq.pop();

		for (int i = 0; i < 4; ++i)
		{
			int nx = x + dirX[i];
			int ny = y + dirY[i];

			if (nx < 0 || nx >= input || ny < 0 || ny >= input)
				continue;

			int nCost = cost + map[nx][ny];
			if (dist[nx][ny] > nCost)
			{
				dist[nx][ny] = nCost;
				pq.push(make_pair(-dist[nx][ny], make_pair(nx, ny)));
			}
		}
	}
	
	return 0;
}
