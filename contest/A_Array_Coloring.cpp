#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int sum=0;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            sum+=a;
        }
        // cout<<sum<<endl;
        if(n%2 == 0)// n is even
        {
            if(sum%2 == 0)//sum bhi even hai
            {
                cout<<"YES"<<endl;
            }
            else
            {
                //sum is odd 
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(sum%2 == 0)//sum bhi even hai
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}