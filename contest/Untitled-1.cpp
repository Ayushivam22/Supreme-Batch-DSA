/*input
........
.l......
.o......
.s......
.t......
........
........
........
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> arr;
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    int i=0;
    string ans="";
    while (i < 8)
        {
            int j=0;
            while (j < 8)
            {
                if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
                {
                    ans += arr[i][j];
                    i++;
                }
                else
                    j++;
            }
            i++;
        }
        cout << ans << endl;
    return 0;
}