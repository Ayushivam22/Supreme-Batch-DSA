#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> &forbidden, int a, int b, int x, int count, int start)
{
    // base case

    if (start < 0 || count < 0 || start > x + 2 * b)
        return INT_MAX; // no solution
    if (x == start)
        return 0;

    long long option1=INT_MAX, option2=INT_MAX;
    if(find(forbidden.begin(), forbidden.end(),start+a) == forbidden.end())
    option1 = helper(forbidden, a, b, x, count, start + a);
    if (option1 != INT_MAX)
        option1 += 1;

    if (count == 0)
        return option1;
    if(find(forbidden.begin(), forbidden.end(), start-b) == forbidden.end())
    option2 = helper(forbidden, a, b, x, count - 1, start - b);
    if (option2 != INT_MAX)
        option2 += 1;

    return min(option1, option2);
}
int minimumJumps(vector<int> &forbidden, int a, int b, int x)
{
    int ans = helper(forbidden, a, b, x, 2, 0);
    if (ans == INT_MAX)
        ans = -1;
    return ans;
}
int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> forbidden = {162,118,178,152,167,100,40,74,199,186,26,73,200,127,30,124,193,84,184,36,103,149,153,9,54,154,133,95,45,198,79,157,64,122,59,71,48,177,82,35,14,176,16,108,111,6,168,31,134,164,136,72,98};
    // forbidden = [1,6,2,14,5,17,4], a = 16, b = 9, x = 7
    cout << minimumJumps(forbidden, 29, 98, 80) << endl;
    return 0;
}
