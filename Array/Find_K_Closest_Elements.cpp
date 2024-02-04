#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void print(vector<int> a){
    for(int i=0; i<a.size();i++){
        cout << a[i] <<" ";
    }
    cout << endl;
}
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int start = 0,end = arr.size()-1;
    while(start < arr.size()) {
        
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int k=4,x=3;
    print(findClosestElements(arr,k,x));
}
