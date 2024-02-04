#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={1,2,2,3,3};
    vector<int> v;
    int i=0;
    while(i!=5){
        if(i==0)v.push_back(arr[i++]);
        if(arr[i]!=arr[i-1])v.push_back(arr[i]);
        i++;
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
}
