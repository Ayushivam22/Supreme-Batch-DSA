#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=l && a[i]<=r)
            {
                count++;
                if(count>maximum)maximum=count;
                if(count<minimum)minimum=count;
            }
            else{
                count--;
                if(count>maximum)maximum=count;
                if(count<minimum)minimum=count;
            }
        }
        if(maximum<0)maximum=0;
        if(minimum>0)minimum=0;
        cout<<maximum<<" "<<minimum<<endl;
    }
}