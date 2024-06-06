#include <bits/stdc++.h>
using namespace std;
bool isSup(int x,vector<int>&a,int i)
{
    for(int j=i;j<a.size();j++)
    {
        if(a[j]>x)
        return false;
    }
    return true;
}
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    ans.push_back(a[a.size()-1]);
    for(int i=a.size()-2;i>=0;i--)
    {
        if(a[i]>ans[ans.size()-1])
        {
            ans.push_back(a[i]);
        }
        // else if(isSup(a[i],a,i))
        // {
        //     ans.push_back(a[i]);
        // }
    }
    set<int> ans2;
    for(auto i:ans)
    {
        ans2.insert(i);
    }
    return vector<int>(ans2.begin(), ans2.end());
}
int main()
{
    int n=4;
    // cin >> n;vector<int> a = ;
    vector<int> a = {5, 4, 3, 2, 1};
    // for (int i = 0; i < n; i++)
    //     cin >> a[i];

    vector<int> b=superiorElements(a) ;
    for(int i=0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}