#include <iostream>
using namespace std;
int search(string &s, string &part)
{
    int i = 0;
    while (i < s.length())
    {
        bool found = false;
        for (int j = 0; j < part.length(); j++)
        {
            if (s[i + j] != part[j])
            {
                
                break;
            }
            else if(j==part.length()-1)found = true;
        }
        if (found == false)i++;
        else return i;
    }
    return -1;
}
int main()
{
    // s = "daabcbaabcbc", part = "abc"
    string s = "daabbcbaabcbc";
    string part = "abc";
    while(search(s,part)!=-1){
        s.erase(search(s,part),part.length());
    }
    cout << s << endl;
}