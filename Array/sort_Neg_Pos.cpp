#include <iostream>
using namespace std;
int main()
{
    int arr[] = {20, -5, 30, -4, 22, -6, -5, -4};
    int left = 0, right = 7;
    while (left < right)
    {
        if (arr[left] < 0)
            left++;
        else if (arr[right] > 0)
            right--;
        else
            swap(arr[left++], arr[right--]);
    }
    for (auto i : arr)
    {
        cout << i << " " ;
    }
}