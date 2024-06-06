#include <bits/stdc++.h>
using namespace std;

int sumstr(vector<int> str,int s,int e)
{
    int sum = 0;
    for(int i = s; i <= e; i++)
    {
        sum+=int(str[i]);
    }
    return sum;
}

void solve(vector<int> str,int& ans,int s,int e)
{
    if (sumstr(str,s,e)==0) ans++;
    // cout<<"ANs: "<<ans<<endl;
    if(s>=e) return;
    solve(str,ans,s+1,e);
    solve(str,ans,s,e-1);
}

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string strr="";
        cin >> strr;
        vector<int> str;
        for(int i = 0; i < n; i++)
        {
            if(strr[i]=='0')str.push_back(-1);
            else str.push_back(1);
        }
        int ans = n*(n+1)/2;
        solve(str,ans,0,str.size()-1);
        cout << ans << "\n";
        
    }
}