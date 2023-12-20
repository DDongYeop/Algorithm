#include <iostream>
using namespace std;
        
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << (x < y ? "NO BRAINS\n" : "MMM BRAINS\n");
    }
}