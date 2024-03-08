#include<iostream>
using namespace std;
bool isIsomorphic(string s, string t) 
{
    if(s.size() != t.size()) return false;
    char map[128]={'\0'};
    for(int i=0; i<s.size(); i++)
    {
        int index=abs((s[i]-'a'));
        if(map[int(index)] != '\0' && map[int(s[i]-'a')]!=t[i] )return false;
        map[int(index)]=t[i];
    }
    return true;  
}

bool helper(string s1,string s2)
{
    return isIsomorphic(s1,s2) && isIsomorphic(s2,s1);
}
int main()
{
    string s1="pan";
    string s2="nap";
    cout << isIsomorphic(s1, s2) << endl;
}