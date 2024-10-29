#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    
	    vector<int> rrrrr(n);
	    rrrrr[0]=v[0];
	    vector<int> gggggg(n);
	    gggggg[n-1]=v[n-1];
	    
	    for(int i=1;i<n;i++){
	        rrrrr[i]=rrrrr[i-1]+v[i];
	        gggggg[n-i-1]=gggggg[n-i]+v[n-i-1];
	    }
	    
	    int ans=0;
	    
	    for(int i=0;i<n;i++){
	        if(v[i]==0){
	            if(gggggg[i]==rrrrr[i]){
	                ans+=2;
	            }else if(abs(gggggg[i]-rrrrr[i])==1){
	                ans++;
	            }
	        }
	    }
	    
	    cout<<ans<<endl;
	}
}