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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        int lead = 0;
        int sumofdif = 0;
        for(int i=0;i<n-1;i++)
        {
            sumofdif+=abs(arr[i]-arr[i+1]);
        }
        for (int i = 0; i < n; i++)
        {
            int dif, difwithone, difwithn;
            if (i == 0)
            {
                dif = abs(arr[i + 1] - arr[i]);         
            }
            else if (i > 0 && i < n - 1)
            {
                dif = abs(arr[i] - arr[i - 1]) + abs(arr[i] - arr[i + 1]);
                
            }
            else
            {
                dif = abs(arr[i] - arr[i - 1]);
                //  sumofdif+=dif;
            }
            if (i == 0)
            {
                difwithone = abs(arr[i + 1] - 1);
            }
            else if (i == n - 1)
            {
                difwithone = abs(1 - arr[i - 1]);
            }
            else
            {
                difwithone = abs(1 - arr[i - 1]) + abs(1 - arr[i + 1]);
            }
            if (i == 0)
            {
                difwithn = abs(arr[i + 1] - k);
            }
            else if (i == n - 1)
            {
                difwithn = abs(k - arr[i - 1]);
            }
            else
            {
                difwithn = abs(k - arr[i - 1]) + abs(k - arr[i + 1]);
            }
            int maxdif = max(difwithone, difwithn);
            if (maxdif - dif > lead)
            {
                lead = maxdif - dif;
            }
        // cout<<"sum:"<<sumofdif<<" lead:"<<lead<<endl;
        }
        cout << sumofdif + lead << endl;
    }
}