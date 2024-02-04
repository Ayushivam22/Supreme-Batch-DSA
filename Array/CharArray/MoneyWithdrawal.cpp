#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n]={0};
        string s="";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(k-arr[i]>=0)
            {
                k=k-arr[i];
                s=s+'1';
            }
            else
            {
                s=s+'0';
            }
        }
        cout<<s<<endl;
    }
}
