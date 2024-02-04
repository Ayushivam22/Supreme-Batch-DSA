#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid]>target) end=mid-1;
        else start=mid+1;
    }
    return -1;
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
    if(BinarySearch(arr, n, target)==-1)cout<<"Element not found"<<endl;
    else cout << "Element is found at index " << BinarySearch(arr, n, target) << endl;
}