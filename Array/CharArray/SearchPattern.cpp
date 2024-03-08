#include <iostream>
#include<vector>
#include <string>
using namespace std;
bool check(string s1,string s2)
{

}
vector <int> search(string pattern, string text)
        {
            vector <int> ans;
            //code here.
            for(int i = 0; i < text.length()-pattern.length(); i++)
            {
                if(text[i] == pattern[0] && pattern.compare(text.substr(i,pattern.length()))==0)
                {
                    ans.push_back(i+1);
                }
            }
            return ans;
        }
int main()
{
    string text = "birthdayboy";
    string pattern = "birth";
    vector<int> ans;
    ans=search(pattern, text);
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] <<endl;
    }
}