#include <iostream>
using namespace std;
int main()
{
    int n = 567;
    int ans = 0;
    while(n!=0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n /= 10;
    }
    cout << ans << endl;
}