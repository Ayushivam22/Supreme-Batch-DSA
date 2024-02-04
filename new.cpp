#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int compare(string a, string b) {
    int ans=0;
    for(int i = 0; i <min(a.length(),b.length()); i++) {
        if(a[i]<b[i]) return -1;
        else if(a[i]>b[i]) return 1;
    }
    return 0;
    }
string lexicographical(string s, int n)
{
    string a;
    a=s;
    string ans;
    ans=s;
    // string ans = a;
    for (int i = 0; i < n; i++)
    {
        a.erase(i, 1);
        if (compare(a,s)<0){
            ans.clear();
            ans=a;
        }
    }
    return ans;

}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char S[n];
        cin>>S;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> S[i];
        // }
        // cout << strcmp(S, S2);
        cout<< lexicographical(S,n)<<endl;
    }
}
