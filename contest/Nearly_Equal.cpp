#include<bits/stdc++.h>
using namespace std;
#define intn int n;cin>>n;
#define cinv F(i,0,v.size()){cin>>v[i];}
#define ll long long
#define end(R) (i==R?"\n":" ");

//next four are for "Vectors"
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vi>

//next four are for "for loops"
#define F(i,L,R) for (int i = L; i < R; i++) 
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FR(i,L,R) for (int i = L; i > R; i--)
#define FRE(i,L,R) for (int i = L; i >= R; i--)

int hammingdis(string a,string b)
{
    int cnt=0;
    int i=0,j=0;
    int n=a.length();
    while(i<n && j<n)
    {
        if(a[i]==b[j])cnt++;
        i++;j++;
    }
    return n-cnt;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int mini=INT_MAX;
        for(int i=0;i<=n-m;i++)
        {
            mini = min(mini,hammingdis(b,a.substr(i,i+m)));
        }
        cout<<mini<<endl;
        
    }
}