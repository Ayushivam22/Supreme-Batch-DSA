// Input: strs = ["flower","flow","flight"]
// Output: "fl"
#include<iostream>
#include<vector>
#include<string>
#include<limits>
using namespace std;
    bool check(vector<string>& s,int k)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i][k]!=s[i+1][k])
            {
                return false;
                // break;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
       int minlen=2147483647;
       for(int i=0;i<strs.size();i++)
       {
           if(strs[i].length()<minlen)minlen=strs[i].length();
       } 
       int count=0;
       for(int i=0;i<minlen;i++)
       {
           if(check(strs,i))count++;
           else break;
       }
    //    if(count==0)return "";
        return strs[0].substr(0,count);
    }
int main()
{
    vector<string> str={"flower","flow","flight"};
    cout << longestCommonPrefix(str)<< endl;
}
    