#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int a,b,c;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;

}