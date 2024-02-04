#include<iostream>
using namespace std;
int main(){
    int n=7;
    // cin >> n ;
    int arr[n]={1, 5, 3, 4, 3, 5, 6};
    for(int i=0; i<n; i++){
        if(arr[abs(arr[i])-1]<0)continue;
        arr[abs(arr[i])-1]*=-1;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0)cout<<i+1<<endl;
    }

}