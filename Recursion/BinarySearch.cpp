#include<iostream>
using namespace std;
int binarySearch(int arr[],int target,int start,int end)
{
    int mid=start+(end-start)/2;
    //base case
    if(arr[mid]==target)return mid;
    if(start>end)return -1;
    if(arr[mid]>target)return binarySearch(arr,target,start,mid-1);
    else return binarySearch(arr,target,mid+1,end);
}
int main()
{
    int arr[]={1,4,5,7,9,11,13};
    cout<<binarySearch(arr,9,0,6);
}