#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b)
{
    if (a == 1 && b == 1)
        return 0;
    // if(a%b==0 || b%a==0) return 0;
    if (a == b)
        return 1;
    int op1 = INT_MAX, op2 = INT_MAX;
    if (a - 1 > 1)
        op1 = 1 + solve(a - 1, b);
    if (b - 1 > 1)
        op2 = 1 + solve(a, b - 1);
    int op3 = INT_MAX;
    int op4 = INT_MAX;
    if (a % b == 0)
        op3 = 1 + solve(a / b, b);
    if (b % a == 0)
        op4 = 1 + solve(a, b / a);
    return min(min(op1, op2), min(op3, op4));
}
int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    a = 5, b = 27;
    cout << solve(a, b) << endl;
    return 0;
}