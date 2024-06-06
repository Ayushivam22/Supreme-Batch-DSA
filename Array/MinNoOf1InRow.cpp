/*input

     {{1, 1, 1, 1},
     {1, 1, 0, 0}, 
     {0, 0, 1, 1},
     {1, 1, 1, 1}}
     */
#include <bits/stdc++.h>

using namespace std;
int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int min=INT_MAX;
        for(int i=0; i<n; i++)
        {
            int count=0;
            for(int j=0; j<m; j++)
            {
                if(a[i][j]==1)
                {
                    count++;
                }
            }
            if(count < min) min=count;
        }
        return min;
    }
int main()
{
    vector<vector<int>>a
     {{1, 1, 1, 1},
     {1, 1, 0, 0}, 
     {0, 0, 1, 1},
     {1, 1, 1, 1}};
     cout<<minRow(4, 4, a);
    return 0;
}