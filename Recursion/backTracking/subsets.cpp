#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    cout << arr[i] <<" ";
    cout << endl;
    return;
}
void helper(vector<int>& nums,int i,vector<int>temp,vector<vector<int>>&ans)
{
    //base
    if(i==nums.size())
    {
        // print(temp);
        ans.push_back(temp);
        return ;
    }
    //exclude
    helper(nums,i+1,temp,ans);

    //include
    temp.push_back(nums[i]);
    helper(nums,i+1,temp,ans);
}
vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums,0,temp,ans);
        return ans;
    }
int main()
{
    vector<int> nums={1,2,3};
    vector<vector<int>> ans2=subsets(nums);
    // cout<<ans[0][0]<<endl;
    for(int i=0;i<ans2.size();i++)
    {
        for(int j=0;j<ans2[i].size();j++)
        {
            cout<<ans2[i][j]<<" ";
        }
        cout<<endl;
    }

}