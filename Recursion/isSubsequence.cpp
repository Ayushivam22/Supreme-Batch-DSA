#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int ptr1=0,ptr2=0;
    while(ptr2 < t.length())
    {
        if(t[ptr2] == s[ptr1]){ptr1++;ptr2++;}
        else ptr2++;
    }
    if(ptr1 == s.length()) return true;
    return false;
}
int main()
{
    string s = "abc", t = "ahcb";
    cout << isSubsequence(s,t) << endl;
}