#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        // code here
        long long prev=1;
        long long next=1;
        long long ans=0;
        if(n==1 || n==2) return 1;
        for(long long i=3; i<=n; i++) 
        {
            ans = ((a * next)%m + (b * prev)%m + c%m)%m;
            prev = next;
            next = ans;
        }
        return ans;

    }
    int main()
    {
        int a,b,c,n,m;
        cin>>a>>b>>c>>n>>m;
        cout << genFibNum(a,b,c,n,m)<<endl;
    }