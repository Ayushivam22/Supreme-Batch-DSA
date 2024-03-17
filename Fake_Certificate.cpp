#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s = "";
        cin >> s;
        long long count = 0, maxx = 0, count1 = 0;
        for (long long i = 0;s[i] != '\0'; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                count1++;
                if (count > maxx)
                {
                    maxx = count;
                }
                count = 0;
            }
        }
        if (count > maxx)
        {
            maxx = count;
        }
        cout << count1 + maxx << endl;
    }
}