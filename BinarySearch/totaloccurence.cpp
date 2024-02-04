#include <iostream>
using namespace std;
int firstoccurence(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int fo = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            fo = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return fo;
}
int lastoccurence(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int lo = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            lo = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
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
    int to = 0;
    if (firstoccurence(arr, n, target) == -1)
        cout << "Elements not found";
    else
    {
        to = lastoccurence(arr, n, target) - firstoccurence(arr, n, target) + 1;
        cout << to << endl;
    }
}