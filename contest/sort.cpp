#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int left = l - 1;
            int count = 0;

            vector<int> mappA(26, 0);
            vector<int> mappB(26, 0);
            for (int i = left; i < r; i++)
            {
                mappA[a[i] - 'a']++;
            }
            for (int i = left; i < r; i++)
            {
                mappB[b[i] - 'a']++;
            }
            for (int i = 0; i < mappB.size(); i++)
            {
                if (mappB[i] != 0)
                {
                    mappA[i] -= (mappB[i]);
                }
            }

            for (int i = 0; i < mappA.size(); i++)
            {
                if (mappA[i] != 0)
                {
                    count += abs(mappA[i]);
                }
            }
            cout << count/2 << "\n";
        }
    }
}