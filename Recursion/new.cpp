#include<bits/stdc++.h>
using namespace std;
bool custom(vector<int>a,vector<int>b)
{
    return a[1]>b[1];
}
int main()
{
    // your code goes here
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       vector<vector<int>>meet={{5,7},{1,3},{9,10}};
       sort(meet.begin(),meet.end(),custom);
       for(auto i:meet)
       {
        cout<<i[0]<<" "<<i[1]<<endl;
       }
}