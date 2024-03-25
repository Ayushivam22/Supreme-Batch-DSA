#include <bits/stdc++.h>
using namespace std;
string addStringsRE(string num1, string num2,int ptr1,int ptr2,int carry,string& res)
{
    // base case
    if (ptr1 < 0 && ptr2 < 0)
    {
        if(carry != 0 )res.push_back(carry+'0');
        reverse(res.begin(),res.end());
        return res;
    }
    // process
    int first;
    int second;
    first = (ptr1 >= 0) ? num1[ptr1] - '0' : 0;
    second = (ptr2 >= 0) ? num2[ptr2] - '0' : 0;
    int sum = first + second + carry;
    carry = sum / 10;
    res.push_back(sum%10 +'0');
    // recursivecall
    return addStringsRE(num1, num2,ptr1-1,ptr2-1,carry,res);
}

string addStrings(string num1, string num2)
{
    string res="";
    return addStringsRE(num1, num2,num1.size()-1,num2.size()-1,0,res);

}
int main()
{
    string s1 = "", s2 = "";
    cin >> s1 >> s2;
    cout << addStrings(s1, s2) << endl;
}