
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    map<int,int> mp;
    for(int i = 0; i < nums.size();i++)
    {
        mp[nums[i]]++;
    }
    for(auto element : mp)
    {
        if(element.second > nums.size()/2)
        {
            return element.first;
        }
    }
}
int main()
{
    vector<int> nums ={2,2,1,1,1,2,2};
    cout<<majorityElement(nums)<<endl;
    return 0;
}