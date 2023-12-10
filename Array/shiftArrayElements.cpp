#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int n = 8;
    int k;
    cin >> k;
    int temp[k];
    // step1 -> creating temp array
    for (int j = 0; j < k; j++)
    {
        temp[j] = arr[n - k + j];
    }
    // step2 -> shifting
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - k];
    }
    // step3 -> copying temp array
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
