#include <bits/stdc++.h>
using namespace std;
long long fastexpo(int a,int b)
{
    long long ans = 1;

    while(b!=0)
    {
        if(b&1)ans = ans*a;
        else a = a*a;
        b=b>>1;
    }
    return ans;
}
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<fastexpo(a,b)<<endl;
    return 0;

}