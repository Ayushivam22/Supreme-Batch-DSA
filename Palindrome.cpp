#include<iostream>
using namespace std;
bool checkpalindrome(string str)
{
    cout<<str<<endl;
    //base case
    if(str[0] != str[str.length()-1])return false;
    if(str.length() == 0 || str.length() == 1)return true;
    //process
    
    //recusive call
    return checkpalindrome(str.substr(1,str.length()-2));
}
int main()
{
    string str="aaaa";
    cout<<(checkpalindrome(str)?"TRUE":"FALSE")<<endl;

}