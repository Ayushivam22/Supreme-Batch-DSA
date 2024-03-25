#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n=5;
    int dp[n+1][n+1]={-1};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

}