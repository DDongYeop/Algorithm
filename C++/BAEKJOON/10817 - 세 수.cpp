#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && c <= a || b <= a && a <= c) 
		cout << a << endl;
	else if (b <= a && c <= b || b <= c && a <= b) 
		cout << b << endl;
	else 
		cout << c << endl;

    return 0;
}