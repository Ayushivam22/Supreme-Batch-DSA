/*Input
3
8
abacabac
5
qzxcq
20
ccooddeeffoorrcceess
*/
#include<bits/stdc++.h>
using namespace std;
void decrypt(string s)
{
    int n = s.length();
    int i=0,j=i+1;
    string ans="";
    while(i < n)
    {
        if(s[i] != s[j])j++;
        if(s[i] == s[j])
        {
            ans+=s[i];
            i=j+1;
            j=i+1;
        }
        
    }
    cout<<ans<<endl;

}
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        string s;cin >> s; 
        decrypt(s);
    }
    
}