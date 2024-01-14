

// solutions for array having same number of digits
// now its is available for general solution

#include <iostream>
#include <vector>
using namespace std;
vector<int> addition(vector<int> v1, vector<int> v2)
{
    vector<int> ans(10, 0);
    int n1 = v1.size();
    int n2 = v2.size();
    int carry = 0;
    int i = n1 - 1, j = n2 - 1, k = 10 - 1;
    while (i >= 0 || j >= 0)
    {
        int first, second;
        if (i < 0)
            first = 0;
        else
            first = v1[i];
        if (j < 0)
            second = 0;
        else
            second = v2[j];
        int sum = first + second + carry;

        ans[k] = sum % 10;
        carry = sum / 10;

        i--;
        j--;
        k--;
    }
    return ans;
}
int main()
{
    vector<int> v1 = {1, 3};
    vector<int> v2 = {1, 7, 8};
    int digit = max(v1.size(), v2.size());
    vector<int> ans = addition(v1, v2);
    for (int i = 0; i < 10; i++)
    {
        cout << ans[i] << " ";
    }
}