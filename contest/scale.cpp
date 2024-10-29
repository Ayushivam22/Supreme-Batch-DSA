#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<string> arr;
        for(int i=0;i<n;i++)
        {
            string str="";
            cin >> str;
            arr.push_back(str);
        }
        vector<string> ans;
        int i=0;
        while(i<n)
        {
            int j=0;
            string ansstr="";
            while(j<n)
            {
                ansstr.push_back(arr[i][j]);
                j+=k;
            }
            ans.push_back(ansstr);
            i+=k;
        }
        for(auto i:ans)
        {
            for(auto j:i)
            cout<<j;
            cout<<endl;
        }

    }
}