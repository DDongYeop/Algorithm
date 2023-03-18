#include <iostream>
#include <string>
using namespace std;

int IsPaliindrome(string s, int &index);
int Recursion(string s, int l, int r,int &index);

int main()
{
    int t, index = 0;
    cin >> t;
    string sArray[t];

    for (int i = 0; i < t; i++)
        cin >> sArray[i];
    for (int i = 0; i < t; i++)
    {
        cout << IsPaliindrome(sArray[i], index) << ' ';
        cout << index << '\n';
        index = 0;
    }
}

int IsPaliindrome(string s, int &index)
{
    return Recursion(s, 0, s.size()-1, index);
}

int Recursion(string s, int l, int r,int &index)
{
    index++;
    if(l > r-1)
        return 1;
    else if(s[l] != s[r]) 
        return 0;
    return Recursion(s, l+1, r-1, index);
}
