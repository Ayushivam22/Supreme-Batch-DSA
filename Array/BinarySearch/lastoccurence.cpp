#include <iostream>
using namespace std;
int lastoccurence(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int lo=-1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target){
            lo=mid;
            start=mid+1;
        }
        else if (arr[mid]>target) end=mid-1;
        else start=mid+1;
    }
    return lo;
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    cout << "Enter elements of array" << endl;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target " << endl;
    cin >> target;
    if(lastoccurence(arr, n, target)==-1)cout<<"Element not found"<<endl;
    else cout << "last occurence is at index " << lastoccurence(arr, n, target) << endl;
}