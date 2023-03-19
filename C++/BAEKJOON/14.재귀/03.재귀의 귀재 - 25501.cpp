#include <iostream>
#include <cstring>
using namespace std;

int IsPaliindrome(char *s, int &index);
int Recursion(char *s, int l, int r,int &index);

int main()
{
    int t, index = 0;
    cin >> t;
    char cArray[1001];

    for (int i = 0; i < t; i++)
    {
        cin >> cArray;
        cout << IsPaliindrome(cArray, index) << ' ';
        cout << index << '\n';
        index = 0;
    }
}

int IsPaliindrome(char *s, int &index)
{
    return Recursion(s, 0, strlen(s)-1, index);
}

int Recursion(char *s, int l, int r,int &index)
{
    index++;
    if(l >= r)
        return 1;
    else if(s[l] != s[r]) 
        return 0;
    return Recursion(s, l+1, r-1, index);
}
