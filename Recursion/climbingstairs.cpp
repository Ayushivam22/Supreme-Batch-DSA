#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mincostRE(vector<int>& cost,int index,vector<int>&dp)
    {
        //base case
        if(index >= cost.size())return 0;//valid solution

        //process 
        if(dp[index] != -1) return dp[index];
        int mini=INT_MAX;
        int op1 = cost[index] + mincostRE(cost,index+1,dp);
        int op2 = cost[index] + mincostRE(cost,index+2,dp);
        int ans = min(op1,op2);
        mini = min(ans,mini);
        dp[index] = mini;
        return mini;
        //recursive call
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        return min(mincostRE(cost,0,dp),mincostRE(cost,1,dp));
        
    }
int main()
{
    vector<int>cost = {1,100,1,1,1,100,1,1,100,1};
    cout << minCostClimbingStairs(cost)<<endl;
}
