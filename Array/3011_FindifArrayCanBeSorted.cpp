#include <bits/stdc++.h>
using namespace std;
int setbits(int n)
{
    int count = 0;
    while (n)
    {
        int bit = n & 1;
        count += bit;
        n = n >> 1;
    }
    return count;
}
bool canSortArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> setbit(n);
    for (int i = 0; i < n; i++)
    {
        setbit.push_back(setbits(nums[i]));
    }
    for(int i = 0; i < setbit.size(); i++)
    {
        cout<<setbit[i]<<" ";
    }
    int left = 0, right = 0;
    int min1 = nums[left], max1 = nums[left];
    int maxi,mini,count=0;
    while (right < nums.size())
    {
        if (setbit[right] == setbit[left])
        {
            if (nums[right] > max1)
                max1 = nums[right];
            if (nums[right] < min1)
                min1 = nums[right];
            right++;
        }
        else
        {
            if(count && maxi>min1)return false;
            count++;
            maxi=max1;
            mini=min1;
            max1=INT_MIN;
            min1=INT_MAX;
            left=right;
        }
    }
    if(maxi>min1)return false;
    return true;
}
int main()
{
    // your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>nums={3,16,8,4,2};
    canSortArray(nums);
    return 0;
}