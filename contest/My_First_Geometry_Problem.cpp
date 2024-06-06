#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        string s="";
        cin >> s;
        int count=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            count++;
        }
        if(count==1)
        {
            cout<<11<<endl;
        }
        else if(count==2)
        {
            if(s=="1100" || s=="0011")
            {
                cout<<21<<endl;
            }
            else
            cout<<121<<endl;
        }
        else if(count==3)
        {
            cout<<231<<endl;
        }
        else cout<<441<<endl;
    }
}