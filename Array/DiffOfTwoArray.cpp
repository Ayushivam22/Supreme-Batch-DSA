#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
vector<int> findMissing(int a[], int b[], int n, int m)
{
    // Your code goes here
    vector<int> ans;
    unordered_map<int, int> mp{0};
    for (int i = 0; i < m; i++)
    {
        mp[b[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 0)
        {
            ans.push_back(a[i]);
        }
    }
    return ans;
}
int main()
{
    int a[] = {};
    int b[] = {};
    vector<int> ans = findMissing(a, b, 0, 0);
    print(ans);
}