#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,5,2,6,4};
    int target;
    cin >> target;
    for(int i=0; i<5;i++){
        for (int j=i+1; j<5;j++){
            if (arr[i]+arr[j]==target)cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}