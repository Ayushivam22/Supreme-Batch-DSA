#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    int ans;
    if (s == '+')
    {
        ans = a + b;
    }
    else if (s == '-')
    {
        ans = a - b;
    }
    else if (s == '*')
    {
        ans = a * b;
    }
    if (ans == c)
    {
        cout << "Yes\n";
    }
    else
        cout << ans << endl;
}