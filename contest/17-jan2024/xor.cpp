#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    int dif=INT_MAX;
	    int pos1,pos2;
	    for(int i=0;i<x;i++)
	    {
	        for(int j=i+1;j<=x;j++)
	        {
	            cout<<"i:"<<i<<" "<<"j:"<<j<<" " << (i^j)<<endl;
	            if((i^j)==x && dif>j-i)
	            {
	                
	                    dif=j-i;
	                    pos1=i;
	                    pos2=j;
                        cout<<"diff:"<<dif<<" "<<"pos1:"<<pos1<<" "<<"pos2:"<<pos2<<endl;
	                
	            }
	        }
	    }
	    
	    cout<<pos1<<" "<<pos2<<endl;
	}

}
