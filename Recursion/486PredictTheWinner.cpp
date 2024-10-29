#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> &nums, int i,int j, int turn ,vector<vector<vector<int> > >&dp)
{
    // base case
    if (i > j)
    {

        return 0;
    }
    if(dp[i][j][turn] != -1)return dp[i][j][turn];

    // calculation
    if (turn == 0)
    {
        int score1 = nums[i] + helper(nums, i + 1, j, 1,dp);
        int score2 = nums[j] + helper(nums, i, j - 1, 1,dp);
        return dp[i][j][turn]=max(score1, score2);
    }
    else
    {
        int score1 =  helper(nums, i + 1, j, 0,dp);
        int score2 =  helper(nums, i, j - 1, 0,dp);
        return dp[i][j][turn]=min(score1, score2);
    }
    
    return 0;
}
bool predictTheWinner(vector<int> &nums)
{
    vector<vector<vector<int> > >dp(nums.size(),vector<vector<int> >(nums.size(),vector<int>(2,-1)));
    int ans = helper(nums, 0, nums.size() - 1, 0,dp);
    cout<<"ans1 = "<<ans<<endl;
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }
    if(ans >= sum-ans)return true;
    return 0;
}
int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {1, 5, 2};
    cout << predictTheWinner(arr) << endl;
    return 0;
}