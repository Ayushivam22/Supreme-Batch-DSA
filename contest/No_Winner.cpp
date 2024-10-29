#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    vector<int> v(16);
	    for(int i=0;i<16;i++){
	        cin>>v[i];
	    }
	    
	    for(int i=0;i<16;i++){
	        int dggg=0;
	        for(auto it:v){
	            if(it<v[i]){
	                dggg++;
	            }
	        }
	        
	        if(dggg==15){
	            cout<<4<<" ";
	        }else if(dggg>=7){
	            cout<<3<<" ";
	        }else if(dggg>=3){
	            cout<<2<<" ";
	        }else if(dggg>=1){
	            cout<<1<<" ";
	        }else{
	            cout<<0<<" ";
	        }
	    }
	    cout<<'\n';
	}
}