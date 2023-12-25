#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin>>s;
        int i=0;
        
        while(s[i]!='\0'){
	        if(s[i]=='A') s[i]='T';
	        else if(s[i]=='T') s[i]='A';
	       // if(s[i]=='') s[i]='';
	        else if(s[i]=='C') s[i]='G';
	        else if(s[i]=='G') s[i]='C';
	        i++;
	    }
	    cout<<s;
	    }
	    cout<<endl;
}