#include<iostream>
using namespace std;
int fibonacci(int n)
{
    //base case
    if(n==0 || n==1) return 1;

    //process
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}