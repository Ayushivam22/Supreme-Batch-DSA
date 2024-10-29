#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        cin >> a[i];
        bool sr = true;
        int count=0;
        for(auto i:a)
        {
            if(i>d && sr)
            {
                sr=false;
                count++;
            }
            else if (i<=d && !sr)
            {
                count++;
                sr=true;
            }
        }
        cout << count << "\n";
    }
}