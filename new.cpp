// Input: nums = [10,21,31]

// Output: 66

// Explanation: The encrypted elements are [11,22,33]. The sum of encrypted elements is 11 + 22 + 33 == 66.
#include<bits/stdc++.h>
using namespace std;
int decrypt(int n)
{
    int index = 0;
    int maxx=INT_MIN;
    while(n != 0)
    {
        int bit = n % 10;
        if(bit > maxx) maxx = bit;
        n=n/10;
        index++;
    }
    int ans=0;
    for(int i=0; i<index; i++)
    {
        ans = ans*10 + maxx;
    }
    return ans;
}
int sumOfEncryptedInt(vector<int>& nums) {
    int sum = 0;
    for(int i=0; i<nums.size(); i++)
    {
        int num = nums[i];
        sum += decrypt(num);
    }
    return sum;
        
}
int main()
{
    vector<int> nums = {10,21,31};
    cout << sumOfEncryptedInt(nums) << endl;
    

    
}