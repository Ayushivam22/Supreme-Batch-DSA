#include <iostream>
#include <limits.h>
using namespace std;
pair<int, int> expand(string s, int i, int j)
{
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        i--;
        j++;
    }
    int pos = i + 1;
    int len = j - i - 1;
    return {pos, len};
}
string longestPalindrome(string s)
{
    int pos, len = 0;
    for (int k = 0; k < s.length(); k++)
    {
        pair<int, int> odd = expand(s, k, k);
        pair<int, int> even = expand(s, k, k + 1);
        if (max(odd.second, even.second) > len)
        {
            len = max(odd.second, even.second);
            (odd.second > even.second) ? pos = odd.first : pos = even.first;
        }
    }
    return s.substr(pos, len);
}
int main()
{
    string s = "baaaabbad";
    cout << longestPalindrome(s) << endl;
}
