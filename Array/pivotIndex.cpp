// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
#include <iostream>
#include <vector>
using namespace std;
int find_pivot(vector<int> &nums)
{
    int n = nums.size();
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += nums[i];
    }
    cout<<total_sum<<endl;
    int sum = 0, pivot=-1;
    for (int i = 0; i < n; i++)
    {
        if (sum == (total_sum - sum - nums[i]))
            pivot = i;
        sum += nums[i];
        
    }
    return pivot;
}

int main()
{
    vector<int>nums={1,7,3,6,5,6};
    cout<<find_pivot(nums);
    return 0;
}