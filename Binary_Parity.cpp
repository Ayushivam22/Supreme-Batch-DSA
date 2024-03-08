#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        while(n!=0)
        {
            sum += n&1;
            n=n>>1;
        }
        (sum&1)?cout<<"ODD"<<endl:cout<<"EVEN"<<endl;
    }

}