#include<bits/stdc++.h>
using namespace std;

void permutate(int s,vector<int> &factor){
    if(s>=1 && s<=100000){
        if(s!=1)
            factor.push_back(s);
        permutate(s*10,factor);
        permutate(s*10+1,factor);
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> factor;

        permutate(1,factor);

        int size=factor.size();
        
        int i=0;
        while(n!=1 && i<size){
            int temp=factor[i];
            if(n%temp!=0){
                i++;
            }else{
                n=n/temp;
            }
        }
        if(n==1){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}