#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string s)
{
    int i = 1;
    while (s[i] != '\0')
    {
        if (s[i] == s[i - 1])
        {
            // cout<<s<<endl;
            s.erase(i - 1, 2);
            i--;
            // cout<<"i:"<<i<<endl;
        }
        else
        i++;
    }
    return s;
}
int main(){
    string str="abbabcaabcaca";
    // abbaca

    
    string ans=removeDuplicates(str);
    cout<<ans<<endl;

}