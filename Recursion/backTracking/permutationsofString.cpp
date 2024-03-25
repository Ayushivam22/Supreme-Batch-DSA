#include<bits/stdc++.h>
using namespace std;
void permutate(string str,int index)
{
    //basecase
    if(index >= str.length())
    {
        cout << str << " ";
        return;
    }
    //process
    for(int j=index;j<str.length();j++)
    {
        swap(str[index],str[j]);
        permutate(str,index+1);
        
    }
    //recursive call
}
int main()
{
    string str="abc";
    
    permutate(str,0);
    
}