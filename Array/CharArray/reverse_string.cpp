#include<iostream>
using namespace std;
void reversestring(string &str,int l,int r)
{
    //base case
    if(l>=r) return;
    //processing
    swap(str[l],str[r]);
    //recursive call
    reversestring(str,l+1,r-1);
    
}
int main()
{
    string str="hello bro how are you doing";
    reversestring(str,0,str.length()-1) ;
    cout << str << endl;
}