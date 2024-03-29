#include<bits/stdc++.h>

using namespace std;
int solve(vector<int>&nums,int i)
{
    //basecase
    if(i >= nums.size()-1)return 0;

    //processing
    int mini = nums.size();
    for(int j = 1; j <= nums[i];j++)
    {
        cout<<"i: "<<i<<" j: "<<j<<endl;
        int ans = j + solve(nums,i+j);
        if(ans < mini)mini = ans;
        cout<<" ans:"<<ans<<" mini: "<<mini<<endl;
    }
    return mini;
}
int jump(vector<int>& nums) 
{
        return solve(nums,0);
}
int main()
{
    vector<int>nums = {2,3,1,1,4};
    cout<<jump(nums)<<endl;
}