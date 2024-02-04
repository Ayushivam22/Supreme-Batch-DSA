#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    int start = 0, end = nums.size() - 1;
    while (start < nums.size() - 1)
    {
        int dif = nums[end] - nums[start];
        if (dif > k)
        {
            end--;
        }
        else if (dif < k)
        {
            start++;
            end=nums.size()-1;
        }
        // 1 1 3 4 5

        else if(dif==k && start!=end)
        {
            cout << nums[start] << " " << nums[end] << endl;
            ans.insert({nums[start], nums[end]});
            start++;
            end = nums.size() - 1;
        }
        else {
            start++;
            end = nums.size() - 1;
        }
    }
    return ans.size();
}

int main()
{
    vector<int> nums = {6,2,9,3,9,6,7,7,6,4};
    int k = 3;
    int ans = findPairs(nums, k);
    cout << ans;
}
