#include <iostream>
#include <vector>
#include<limits.h>
#include <string>
using namespace std;

vector<string> find(string text, string pattern, int index, vector<string> &final)
{
    string ans;
    for (int i = index; i < text.length(); i++)
    {
        if (text[i] == pattern[i - index])
        {
            ans.push_back(text[i]);
            break;
        }
    }
    final.push_back(ans);
    return final;
}

int main()
{
    string text = "acdcdacdc";
    string pattern = "";
    int start = 0, end = text.length() - 1;
    vector<string> final;
    while (start < text.length() && end >= 0)
    {
        pattern.push_back(text[start]);
        if (text[start] == pattern[0])
        {

            final=find(text, pattern, start,final);
            
        }
        else
        {
            start++;
        }
    }
    int max=0;
    for (int i = 0; i < final.size(); i++)
    {
        if(max<final[i].length())max=final[i].length();
        cout << final[i] << endl;
    }
    cout<<max<<endl;
}