#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=1;i<=n;i++)
        {
            int ans=((int)(i+ceil((float)n/2)))%n;
            if(ans == 0)
            {
                cout<<n<<" ";
            }
            else cout<<ans<<" ";
            
        }
        cout<<endl;

    }
}   