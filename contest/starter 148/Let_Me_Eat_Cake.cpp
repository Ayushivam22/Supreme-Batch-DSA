#include <bits/stdc++.h>
using namespace std;
#define intn \
    int n;   \
    cin >> n;
#define cin(v) \
    F(i, 0, v.size()) { cin >> v[i]; }
#define ll long long
#define end(R) (i == R ? "\n" : " ");

// next four are for "Vectors"
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vi>

// next four are for "for loops"
#define F(i, L, R) for (int i = L; i < R; i++)
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FR(i, L, R) for (int i = L; i > R; i--)
#define FRE(i, L, R) for (int i = L; i >= R; i--)

// User defined functions
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    if (a == 0)
        return b;
    return gcd(max(a, b) - min(a, b), min(a, b));
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int count = 0;
        cin >> a >> b;
        while (a != b)
        {
            if (a < b)
            {
                count += ceil(b / 2.0);
                b = (b / 2);
            }
            else
            {
                count += ceil(a / 2.0);
                a = (a / 2);
            }
        }
        cout << count << endl;
    }
}