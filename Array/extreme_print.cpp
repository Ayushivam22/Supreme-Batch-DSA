#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    //op -> 1 10 2 9 3 8 4 7 5 6
    int left=0;
    int right=10-1;
    while(left<=right){
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++; right--;
    }
}