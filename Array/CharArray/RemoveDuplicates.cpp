#include <iostream>
#include <set>
#include <string>
#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str)
{
    string ans="";
    int arr[256]={0};
    for (int i = 0; i < str.length(); i++)
    {

        if (arr[str[i]] == 0)
        {
            ans.push_back(str[i]);
            arr[str[i]]++;
        }

    }
    return ans;
}
int main()
{
    string str = "geEksforGEeks"; //"geEksforG"
    cout << removeDuplicates(str) << endl;
}