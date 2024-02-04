#include <bits/stdc++.h>
#include <string>
using namespace std;
string decodeString(string s)
{
    string ansStr = "";
    int index = 0;
    // int k = s[index] - '0';
    int open = 0, closed = 0;
    while (closed < s.length())
    {
        if(s[index] == '[')open=index;
        if(s[index] == ']')
        {
            closed=index;
            int k=s[open-1]-'0';
            for(int i=0; i<k; i++)
            {
                ansStr.append(s[open+1],closed-open-1);
            }
        }

    }
    return ansStr;
}
int main()
{
    string s = "3[a2[c]]";
    cout << decodeString(s) << endl;
}