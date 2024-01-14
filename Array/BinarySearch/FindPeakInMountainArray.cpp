#include<iostream>
using namespace std;
int peak(int *arr,int n){
    int start = 0,end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return arr[mid];
        else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]) start=mid+1;
        else end=mid-1;
    }
}
int main(){
    int arr[]={3,4,5,1};
    int n=4;
    cout<<peak(arr,n)<<endl;
}

/*
    3 4 5 1
    s=0 e=3 m=1

*/