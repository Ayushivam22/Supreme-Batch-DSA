#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int great = -1, less = -1;
        int i = 0;
        sort(a.begin(), a.end());
        int j = n - 1;
        while (i < j)
        {
            if(a[i] < x)
            {
                if(a[j] - (x-a[i]) >= x)
                {
                    a[i]=x;
                    a[j]-= (x-a[i]);
                }

            }
            i++;j--;
        }
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= x)count++;
        }
        cout << count << endl;
    }
}