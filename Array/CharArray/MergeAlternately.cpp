#include <bits/stdc++.h>
#include <string>
using namespace std;
string mergeAlternately(string word1, string word2)
{
    string merged = "";
    int i=0;
    int ind1=0,ind2=0;
    while(i<word1.length()+word2.length())
    {
        if(i%2==0)merged.push_back(word1[ind1++]);
        else merged.push_back(word2[ind2++]);
        i++;
        if(word1[ind1]== '\0')
        {
            merged.append(word2.substr(i/2,word2.length()));
            break;
        }
        if(word2[ind2]== '\0') 
        {
            merged.append(word1.substr(i/2,word1.length()));
            break;
        }

    }
    return merged;
}
int main()
{
    string s1 = "ab";
    string s2 = "pqrs";
    cout << mergeAlternately(s1,s2) << endl;
}