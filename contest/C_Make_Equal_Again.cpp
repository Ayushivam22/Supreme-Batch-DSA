#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0, j = n - 1;
        int ans = j - i + 1;
        bool flag=false;
        int ans2=INT_MAX;
        while (i <= j && i < n && j >= 0)
        {
            if (a[i] == a[j] && a[i] == a[0])
            {
                i++;
                j--;
                ans = j - i + 1;
            }
            else if (a[i] == a[i + 1])
            {
                i++;
                ans = j - i ;
            }
            else if (a[j] == a[j - 1] )
            {
                if(a[j] == a[i])
                {
                    j--;
                    ans = j - i - 1;
                }
                else
                {
                    j--;
                    ans2 = j;
                }
            }
            else
                break;
        }
        if(ans2 != INT_MAX)ans=min(ans,ans2);
        if (ans < 0)
            ans = 0;
        if (ans == n)
            ans = n - 1;
        cout << ans << endl;
    }
}