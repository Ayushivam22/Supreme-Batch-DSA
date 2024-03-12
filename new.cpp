#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool binarysearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    cout << binarysearch(arr, 5);
}