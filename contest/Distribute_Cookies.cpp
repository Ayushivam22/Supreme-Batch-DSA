#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m < n)
        {
            cout<<n-m<<endl;
        }
        else{

        int ans1 = abs(m - (m/n)*n);
        int ans2 =  abs(((m/n)+1)*(n)-m);
        cout << ((ans1<ans2)?ans1:ans2)<<endl;
        }
    }
}