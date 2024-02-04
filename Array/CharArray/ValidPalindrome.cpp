#include <iostream>
using namespace std;
bool checkPalindrome(string s)
{
    int start = 0, end = s.length() - 1;
    bool sol = true;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            sol = false;
            break;
        }
        else
        {
            start++;
            end--;
        }
    }
    return sol;
}
bool validPalindrome(string s){
    string s2=s;
    if(checkPalindrome(s2)) return true;
    else{
        for(int i=0;i<s.length();i++){
            s2.erase(i,1);
            if(checkPalindrome(s2)) return true;
            else{
                s2=s;
            }
        }
    }
    return false;
}
int main()
{
    string s="aabva";
    cout<<validPalindrome(s);
}
    
