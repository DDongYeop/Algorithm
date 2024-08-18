#include <iostream>

using namespace std;

void Print();

int d = 0;

int main()
{
	int i, j;

	cin >> i >> d;

	if (i == 1)
	{
		Print();
		return 0;
	}

	for (int k = 1; k < i; ++k)
	{
		if (k == 2)
			d += 28;
		else if (k == 4 || k == 6 || k == 9 || k == 11)
			d += 30;
		else
			d += 31;
	}

	Print();
}

void Print()
{
	switch (d % 7)
	{
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	case 0:
		cout << "SUN";
		break;
	}
}
