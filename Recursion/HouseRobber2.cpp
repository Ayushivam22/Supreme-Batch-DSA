#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums,int i,int n)
    {
        if(i>n)return 0;
        int option1 = nums[i] + solve(nums,i+2,n);
        int option2 = solve(nums,i+1,n);
        cout<<max(option1,option2)<<endl;
        return max(option1,option2);
    }
    int rob(vector<int>& nums) {
        int op1 = nums[0]+solve(nums,2,nums.size()-2);
        cout<<"OP1: "<<op1<<endl;
        int op2 = 0 + solve(nums,1,nums.size()-1);
        cout<<"OP2: "<<op2<<endl;
        return max(op1,op2);
    }
int main()
{
    vector<int> nums={1,2,3,1};
    cout<<rob(nums);
    return 0;
}