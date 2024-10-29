#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool>arr(100,true);
    int n;
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==false)continue;
        int j = i*i;
        while(j <= n)
        {
            arr[j]=false;
            j+=i;
        }
    }
    for(int i=2;i<n;i++)
    {
        cout<<i<<":"<<((arr[i]==1)?" Prime":" ")<<endl;
        // is_constructible
    }
}   