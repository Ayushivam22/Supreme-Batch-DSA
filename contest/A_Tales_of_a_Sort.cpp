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
        {
            cin >> a[i];
        }
        int j = n - 1;
        while (j>=0)
        {
            int maxidx = 0;
            int maxi = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= maxi)
                {
                    maxi = a[i];
                    maxidx = i;
                }
            }
            a[maxidx] = -1;

            if (maxidx != j)
                {
                    cout << maxi << endl;
                    break;
                }
            else
                j--;
        }
        if(j<0)cout<<0<<endl;
    }
}