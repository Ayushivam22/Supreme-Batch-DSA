#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1};

    int n = sizeof(arr) / sizeof(int);
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[right] == 1)
            right--;
        if (arr[left] == 0)
            left++;
        else
            swap(arr[left], arr[right]);
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
