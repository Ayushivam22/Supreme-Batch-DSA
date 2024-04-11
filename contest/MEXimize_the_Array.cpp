#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    vector<int> a;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
        sort(a.begin(),a.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
            int ans = abs(a[i]-i);
            count+=ans;
        }
        cout<<count<<endl;
	}

}
