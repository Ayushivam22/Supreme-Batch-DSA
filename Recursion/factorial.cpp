#include <iostream>
using namespace std;
int factorial(int x)
{
    // base case
    if (x == 1 || x == 0)
        return 1;
    // process
    return x * factorial(x - 1);
}
int main()
{
    int n;
    cout<<"Number of testcases: "<<endl;
    cin >> n;
    while (n--)
    {
        int x;
        cout << "Enter the number :";
        cin >> x;
        cout << "The factorial of " << x << " is : " <<factorial(x) << endl;
    }
}