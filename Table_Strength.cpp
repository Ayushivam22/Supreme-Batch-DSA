#include <bits/stdc++.h>
using namespace std;
int findmax(vector<int> a, vector<int> arr)
{
    if (a.size() == 0)
        arr.push_back(-1);
    else
    {
        int min=INT_MAX;
        for (int i = 0; i < a.size(); i++)
        {
            if(min > a[i]) min = a[i];
        }
        arr.push_back(min * (a.size()));
    }
    int max=INT_MIN;
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>max) max=arr[i];
    }
    return max;
}
void subsetss(vector<int> w, int index, vector<int> subset,vector<int>&final)
{
    // base case
    if (index > w.size() - 1)
    {
        vector<int> arr;
        final.push_back(findmax(subset, arr));
        return;
    }
    // take
    subset.push_back(w[index++]);
    subsetss(w, index, subset,final);
    // dont take
    subset.pop_back();
    subsetss(w, index, subset,final);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> w ;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            w.push_back(a);
        }
        vector<int> subset;
        vector<int>final;
        subsetss(w, 0, subset,final);
        int max=INT_MIN;
        for(int i=0;i<final.size();i++)
        {
            if(max<final[i])max=final[i];
        }
    cout<<max<<endl;
    }
}
