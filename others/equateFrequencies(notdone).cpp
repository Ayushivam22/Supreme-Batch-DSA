#include <iostream>
#include <set>
#include <vector>
using namespace std;
bool check(vector<int> v)
{
    int start = 0, end = v.size() - 1;
    for (int i = 0; i < v.size()-1; i++)
    {
        // if(v[i]==v[i+1])
        if (v[i] - v[i + 1] == 1)
        {
            v[i] = v[i] - 1;
            break;
            // flag = false;
        }
        else if (v[i] - v[i + 1] == -1)
        {
            v[i + 1] = v[i + 1] - 1;
            // flag = false;
            break;
        }
    }
    int ans = 0;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i] != v[i+1])return false;
    }
    return true;
}
bool sameFreq(string s)
{
    // code here
    vector<int> v(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a']++;
    }
    // creating second vector without zerossss
    vector<int> res;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
            res.push_back(v[i]);
    }
    bool ans= check(res);
    return ans;
}
int main()
{
    string s = "xxyyz";
    cout << sameFreq(s) << endl;
    // cout<<(2^2^2);
}
