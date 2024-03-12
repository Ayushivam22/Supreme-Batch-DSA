#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
{
    // Your code goes here
    // m1[0][0] m2[2][2] 
    int count = 0;
    int r1 = 0,  r2 = n - 1,c1=0,c2=n-1;
    while (r1 < n && r2 >=0)
    {
        
        while(c1 < n && c2 >= 0)
        {
            if(mat1[r1][c1] + mat2[r2][c2] == x) 
            {
                count++;
                c1++;
                c2--;
            }
            else if(mat1[r1][c1] + mat2[r2][c2] > x) c2--;
            else if(mat1[r1][c1] + mat2[r2][c2] < x) c1++;
        }
        if(c1>=n)
        {
            c1=0;
            r1++;
        }
        if(c2<0)
        {
            c2=n-1;
            r2--;
        }
    }
    return count;
}
int main()
{
    vector<vector<int>> mat1 = {{1, 5, 6},
                                {8, 10, 11},
                                {15, 16, 18}};
    vector<vector<int>> mat2 = {{2, 4, 7},
                                {9, 10, 12},
                                {13, 16, 20}};
    cout << countPairs(mat1,mat2,3,21) << endl;
}
