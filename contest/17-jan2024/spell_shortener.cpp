#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string lexicographical(string s, int n)
{
    int count=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            s.erase(i,1);
            count=0;
            return s;
        }
    }
    if(count)
    {
        s.erase(n,1);
    }
    return s;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char S[n];
        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }
        // cout << strcmp(S, S2);
        cout<< lexicographical(S,n)<<endl;
    }
}
