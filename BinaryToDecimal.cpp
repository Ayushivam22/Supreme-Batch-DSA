#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int binary;
    cout<<"Enter the binary number:";
    cin>>binary;
    int i=0,ans=0;
    while(binary){
        int bit=binary%10;
        if(bit) ans+=pow(2,i++);
        else i++;
        binary/=10;
    }
    cout << "The decimal number is " << ans ;
}