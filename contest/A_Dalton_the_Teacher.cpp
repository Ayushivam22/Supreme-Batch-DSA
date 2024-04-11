#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(arr[i]!=i+1)i++;
            else if(arr[j]!=j+1)j--;
            else
            {
                count++;
                i++;
                j--;
            }

            

        }
        cout<<count<<endl;
    }
}