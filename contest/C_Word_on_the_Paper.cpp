#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> arr;
        for (int k = 0; k < 8; k++)
        {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        int i = 0;
        string ans = "";
        while (i < 8)
        {
            int j = 0;
            while (j < 8 && i<8)
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
        // cout<<"i:"<<i<<"ans:"<<ans<<endl;
        cout << ans << endl;
    }
}