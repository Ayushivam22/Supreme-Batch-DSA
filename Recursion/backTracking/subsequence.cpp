#include <bits/stdc++.h>
using namespace std;
void helper(string s,int i,string temp,vector<string>&ans)
{
    //base case
    if(i == s.length())
    {
        if(temp.length()>=1)
        ans.push_back(temp);
        return ;
    }
    //exclude
    helper(s,i+1,temp,ans);
    //include
    temp.push_back(s[i]);
    helper(s,i+1,temp,ans);

}
vector<string> subsequences(string str){
	
	// Write your code here
    vector<string> ans;
    string temp;
    helper(str,0,temp,ans);
    return ans;
	
}
int main()
{
    string s="ayush";
    vector<string> ans=subsequences(s);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}