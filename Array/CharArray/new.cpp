#include <bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int beautifulstring(string& s,int n)
{
    int count=1;
    int ans=1;
    int start=1;
    while(s[start] != '\0')
    {
        
        if(s[start]==s[start-1])
        {
            ans++;
            if(ans>count)
            {
                // cout<<"ans: "<<ans<<" count:"<<count<<endl;
                count=ans;
            }
        }
        else
        {
            if(ans>count)
            {
                // cout<<"ans: "<<ans<<" count:"<<count<<endl;
                count=ans;
            }
            ans=1;
        }
        start++;
    }
    return count;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<q;i++)
        {
            if(i==0)cout<<beautifulstring(s,n)<<" ";
            if(i==q-1)
            {
                string ch;
                cin>>ch;
                s.append(ch);
                cout<<beautifulstring(s,n+i)<<endl;
            }
            else
            {
                string ch;
                cin>>ch;
                s.append(ch);
                cout<<beautifulstring(s,n+i)<<" ";
            }
        }
    }
}
