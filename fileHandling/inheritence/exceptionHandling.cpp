#include<bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int a,b,c;
       cin >> a >>b;
       
       try
       {
            if(b==0)
            {
                throw(b);
            }
            else 
            {c=a/b;
            cout<<c<<endl;
       }}
       catch(...)
       {
        cout<<"Error: Division by zero."<<endl;
       }
}