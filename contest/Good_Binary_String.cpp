#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forv for(int i=0;i<v.size();i++)
#define fors for(int i=0;i<s.length();i++)
#define cinvec for(int i=0;i<v.size();i++){cin>>v[i];}
#define cinn int n;cin>>n;
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    cinn
	    string s;
	    cin>>s;
	    vector<int>str;
	    for(int i=0;i<s.length();i+=2)
	    {
	        if(s[i]!=s[i+1])
	        {
	            if(str.size() == 0 || str.back() != int(s[i]))str.push_back(i+1);
	            else str.push_back(i+2);
	        }
	    }
        cout<<str.size()<<endl;
        for(int i=0; i<str.size(); i++)
        {
            cout<<str[i]<<" ";
        }
        cout<<endl;
	}

}
