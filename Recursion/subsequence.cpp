#include<iostream>
using namespace std;
void subsequence(string s1,string s2,int index)
{
    //base case
    if(index >= s1.length())
    {
        cout<<s2<<endl;
        return;
    } 
    //process
    
    //include wala case
    subsequence(s1,s2+s1[index],index+1);
    //exclude wala case
    subsequence(s1,s2,index+1);
    
}
int main()
{
    string s1;
    cin>>s1;
    string s2;
    subsequence(s1,s2,0);
}