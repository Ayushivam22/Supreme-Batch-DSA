#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int xa=0,ya=0;
        string str = "";
        cin >> str;
        bool ans=false;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='R')xa++;
            else if(str[i]=='L')xa--;
            else if(str[i]=='U')ya++;
            else ya--;
            int time=abs(x-xa)+abs(y-ya);
            if(i+1==time)
            {
                ans=true;
                break;
            }
        }
        if(ans)
        cout<<"Yes\n";
        else cout<<"No\n";  
    }
}