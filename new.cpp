#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string helper(string s)
{
    string str = "";
    int i = 0;
    for (auto ch : s)
    {
        if (ch == '0')
        {
            str.insert(i, "01");
            i = i + 2;
        }
        if (ch == '1')
        {
            str.insert(i, "10");
            i = i + 2;
        }
        cout << str << endl;
    }
    return str;
}

char nthCharacter(string s, int r, int n)
{
    string str;
    while(r--)
    {
        str=helper(s);
        s=str;
    }

    return str[n];
}

int main()
{
    string s = "111101";
    // cout<<
    cout << nthCharacter(s, 2, 3);
}