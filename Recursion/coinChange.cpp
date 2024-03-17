#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int coinChange(vector<int> &coins, int amount, vector<int> &dp)
{
    // base case
    if (amount < 0)
        return INT_MAX; // invalid case
    if (amount == 0)
        return 0; // valid case
    
    if(dp[amount] != -1) return dp[amount];
    int mini = INT_MAX;

    for (int i = 0; i < coins.size(); i++)
    {
        int coin = coins[i];
        
        int recc= coinChange(coins, amount - coin, dp);
        if(recc != INT_MAX)
        {
        int ans=1+recc; //
        mini = min(ans, mini);
        }
    }
    dp[amount] = mini;
    return mini;
}
int main()
{
    vector<int> coins = {1, 2, 5};
    int target = 11;
    vector<int> dp(target+1,-1);
    int ans=coinChange(coins, target, dp);
    cout<<((ans==INT_MAX)?-1:ans)<<endl;
}
