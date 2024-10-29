#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>x;
        vector<int>p;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            x.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            p.push_back(a);
        }
        int i=0,k=2;
        while(i != n-1)
        {
            if(k<0)
            {
                cout<<"NO"<<endl;
                break;
            }
            if(x[i+1]-x[i] > p[i])k--;
            i++;
        }
        cout<<"YES"<<endl;

    }
}