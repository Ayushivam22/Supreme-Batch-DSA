#include<iostream>
using namespace std;
bool checksorted(int arr[],int i,int size)
{
    //base case
    if(arr[i] < arr[i-1])
    {
        return false;
    }
    if(i>=size) 
    {
        return true;
    }
    return checksorted(arr,i+1,size);
}
int main()
{
    int size;
    cout<<"size : ";
    cin>>size;
    cout<<"Enter the elements of the array : ";
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout << (checksorted(arr, 1,size)?"YES":"NO")<<endl;
}