#include<bits/stdc++.h>
using namespace std;
#define intn int n;cin>>n
#define cinv F(i,0,v.size()){cin>>v[i];}
#define ll long long
#define end(R) (i==R?"\n":" ")

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


int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        intn;
        vi v(2*n);
        unordered_map<int,int>mapp;
        F(i,0,2*n)
        {
            cin>>v[i];
            mapp[v[i]]++;
        }
        bool flag=true;
        for(auto i:mapp)
        {
            // cout<<i.first<<":"<<i.second<<endl;
            if(i.second > 2)
            {
                cout<<"NO"<<endl;
                flag=false;
            }
        }
        if(flag)cout<<"YES"<<endl;
    }
}