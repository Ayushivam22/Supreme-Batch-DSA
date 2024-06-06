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
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a, a + n);
        int i = 0;
        while (i < n)
        {
            if (a[i] < 4 && k > 0)
            {
                sum = sum - a[i] + (7 - a[i]);
                k--;
            }
            i++;
        }
        cout << sum << endl;
    }
}