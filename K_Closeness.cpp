#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        // cout<<"MAX:"<<maxi<<"MIN:"<<mini<<endl;
        int diff=maxi-mini;
        // cout<<"diff1"<<diff<<endl;
        int mini2=INT_MAX;
        int maxi2=INT_MIN;
        for(int i = 0; i < n; i++)
        {
            arr[i] = arr[i]%k;
            // cout<<arr[i]<<" ";
            mini2=min(mini2,arr[i]);
            maxi2=max(maxi2,arr[i]);

        }
        if(maxi2-mini2<diff)diff=maxi2-mini2;
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]+k - arr[i+1] < diff)
            diff=arr[i]+k - arr[i+1] ;
        }
        // cout<<"MAX:"<<maxi<<"MIN:"<<mini<<endl;
        cout << diff << endl;
    
    }
}