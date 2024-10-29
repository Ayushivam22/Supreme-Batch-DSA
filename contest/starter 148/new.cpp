#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
    if (a == 1 && b == 1)
    {
        return 0;
    }
    else if (a % b == 0 || b % a == 0)
    {
        return 1;
    }
    else
    {
        cout<<"a:"<<a<<"b:"<<b<<endl;
        int ans1 = 1 + solve(a - 1, b);
        int ans2 = 1 + solve(a, b - 1);

        int ans3 = INT_MAX;
        int ans4 = INT_MAX;

        if (a % b == 0)
        {
            ans3 = 1 + solve(a / b, b);
        }
        if (b % a == 0)
        {
            ans4 = 1 + solve(a, b / a);
        }
        cout<<"ans1 = "<<ans1<<"ans2 = "<<ans2<<"ans3 = "<<ans3<<"ans4 = "<<ans4<<endl;
        int ans = min({ans1, ans2, ans3, ans4});
        cout<<"MIN:"<<ans<<endl<<endl;
        return ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int recursionKaAns = solve(a, b);
    cout << recursionKaAns << endl;
}