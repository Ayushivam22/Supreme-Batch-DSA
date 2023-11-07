#include<iostream>
#include<bits/stdc++.h>
// your code goes here
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++){
            cin >> arr1[i];
        }
	    for(int i=0;i<n;i++){
	        int sum=0;
	        for(int j=0;j<n;j++){
	            sum+=arr1[j]*pow(2,i*j);
	        }
	        arr2[i]=sum;
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr2[i]<<" ";
	    }
	    cout<< endl;
	}
	return 0;
}