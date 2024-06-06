// n = 5, arr1[] = {1, 2, 3, 4, 5}
// m = 5, arr2 [] = {1, 2, 3, 6, 7}
#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &res)
{
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // Your code here
    // return vector with correct order of elements
    int i = 0;
    int j = 0;
    set<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            ans.insert(arr1[i]);
            i++;
            
        }
        else if (arr1[i] > arr2[j])
        {
            ans.insert(arr2[j]);
            j++;
            
        }
        else
        {
            ans.insert(arr1[i]);
            i++;
            j++;
          
        }
    }
    while (i < n)
    {
        ans.insert(arr1[i++]);
        
    }
    while (j < m)
    {
        ans.insert(arr2[j++]);
       
    }
    return vector<int>(ans.begin(), ans.end());
}
int main()
{
    
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> res = findUnion(arr1, arr2, n, m);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}
