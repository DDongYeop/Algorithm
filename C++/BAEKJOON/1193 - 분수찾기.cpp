#include <iostream>

using namespace std;

int main() 
{
	int input;
	cin >> input;

	int i = 1;
	while (input > i) 
    {
		input -= i;
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - input << '/' << input << endl;
	else
		cout << input << '/' << i + 1 - input << endl;
}
