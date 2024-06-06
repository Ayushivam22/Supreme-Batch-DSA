#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort(int *arr, int n)
{
    int i = 0;
    int left = 0;
    int right = n - 1;
    while (i <= right)
    {
        if (arr[i] == 0)
            swap(&arr[i++], &arr[left++]);
        else if (arr[i] == 2)
            swap(&arr[i], &arr[right--]);
        else
            i++;
        print(arr, n);
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 0, 1, 1, 0, 2, 2, 1, 2, 0, 1, 2, 0, 0, 1, 0, 2, 0, 1, 1, 1, 2, 1, 2};
    int n = 24;
    sort(arr, n);

    print(arr, n);
}