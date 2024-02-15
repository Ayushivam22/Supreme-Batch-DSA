#include <bits/stdc++.h>
using namespace std;
int mini(int a,int b)
{
    int ans=-11;
    (a>b)?ans=a:ans=b;
    return ans;
}
int main() {
	// your code goes here
    int a=4,b=5;
    cout<<mini(a,b)<<endl;
}
