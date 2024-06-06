#include <bits/stdc++.h>
using namespace std;
// int sum(vector<int> &ans,int front,int back)
// {
//     int sum = 0;
//     for (int i = front; i < back; i++)
//     {
//         sum += ans[i];
//     }
//     return sum;
// }
int solve(vector<int> &arr,int front,int back,int sum)
{
    //base case
    if(front>back) 
    {
        return 0;
    }
    else if(sum%2==0)
    {
        // for(int i=front; i< back; i++)
        // cout<<arr[i]<<" ";
        // cout<<"sum:"<<sum(arr,front,back)<<endl;
    return back-front+1;
    }
    //processing
    front++;
    int ans1=solve(arr,front,back,sum-arr[front-1]);
    front--;
    back--;
    int ans2=solve(arr,front,back,sum-arr[back+1]);
    return max(ans1,ans2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum=0;
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum+=a;
            arr.push_back(a);
        }
        cout << solve(arr,0,arr.size()-1,sum) << endl;
    }
}