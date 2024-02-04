// MISSING ELEMENTS FROM AN ARRAY WITH DUPLICATES
// IP-> 1 3 5 3 4
// OP-> 2
#include <iostream>
using namespace std;
void Print(int *arr,int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }
}
int Missing(int *arr,int size)
{ // ip-> 1 2 3 3 4
    for (int i = 0; i < size; i++)
    {   
        if(arr[abs(arr[i])-1]<0)continue;
        arr[abs(arr[i])-1] *= -1;
    } 
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            ans = i;
    }
    return (ans + 1);
}
int main()
{
    int arr[5] = {5, 2, 3, 3, 4};
    cout<<Missing(arr,5)<<endl;
    // cout<<<<endl;
    return 0;
}