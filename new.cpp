#include<iostream>
#include<vector>
using namespace std;

void SortZeroOne(vector<int>& arr, int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        if(arr[start]==0){
            start++;
        }

        else if(arr[end]==1){
            end--;
        }

        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    // return arr;
}

int main(){
    vector<int> arr={0,1,0,1,1,1,1,1,1,0,1,0,1,1,0,1,1,0,1};
    int size=10;
    SortZeroOne(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}