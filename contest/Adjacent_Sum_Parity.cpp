#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<v.size();i++){cin>>v[i];}
	    string s="";
	    if(v[0]==0)
	    {
	        s.push_back('e');
	        s.push_back('e');
	    }
	    else
	    {
	        s.push_back('o');
	        s.push_back('e');
	    }
	    for(int i=1;i<n-1;i++)
	    {
	        if(v[i]==0)
	        {
	            if(s.back()=='e')s.push_back('e');
	            else s.push_back('o');
	        }
	        else
	        {
	            if(s.back()=='o')s.push_back('e');
	            else s.push_back('o');
	        }
	    }
	    if(v[n-1]==0)
	    {
	        if(s.back()==s.front())cout<<"yes"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else
	    {
	        if(s.back()!=s.front())cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
        cout<<"s:"<<s<<" front:"<<s.front()<<" back:"<<s.back()<<endl;
	}

}
