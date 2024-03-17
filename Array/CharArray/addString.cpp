#include <bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2)
{
    string res="";
    int sum=0,carry=0;
    int ptr1=num1.size()-1,ptr2=num2.size()-1;
    while(ptr1>=0 || ptr2>=0)
    {
        int first;
        int second;
        first=(ptr1>=0)?num1[ptr1]-'0':0;
        second=(ptr2>=0)?num2[ptr2]-'0':0;
        int sum = first + second + carry;
        res.push_back(sum%10 + '0');
        // cout << res << endl;
        carry = sum / 10;
        // cout<<"first:"<<first <<" second:"<<second <<  " sum:" << res << " "<< "carry:" << carry <<" ptr1:"<<ptr1<<" ptr2:"<<ptr2<< endl;
        ptr1--; ptr2--;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    string s1 = "43", s2 = "195";
    cout << addStrings(s1, s2) << endl;
}