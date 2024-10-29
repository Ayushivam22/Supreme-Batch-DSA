#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> ans; 
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            ans.push_back({a,b});
        }  
        for(int i =0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int summ=ans[i].first*ans[j].second+ans[i].second*ans[j].first;
                if(summ>sum)sum=summ;
            }
        }
        cout<<sum<<endl;
    }
}