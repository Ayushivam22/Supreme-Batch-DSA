// Input: nums = [2,1,3]
// Output: [2,3,1]
#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    // step1
    if(nums.size()==1)return;
    if(nums.size()==2)
    {
        swap(nums[0],nums[1]);
        return;
    }
    int i = nums.size() - 2;
    while (i >= 0)
    {
        if (nums[i] < nums[i + 1])
        {
            break;
            /*
            2 3 1
            */
        }
        i--;
    }
    if(i==-1)
    {
        reverse(nums.begin(),nums.end());
        return;
    }
    // step2
    swap(nums[i], nums[nums.size()-1]);
    reverse(nums.begin()+i+1,nums.end());
    return;
}
int main()
{
    vector<int> nums = {2,3,1};
    nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}