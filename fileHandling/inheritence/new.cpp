#include<bits/stdc++.h>
using namespace std;
class baseclass
{
    public:
    int a=15;
    public:
    int geta() const { return a; }
    void seta(int a){this->a=a; }

};
class derived:public baseclass
{
    public:
    int b=1;
    int geta() const { return a; }
};
int main()
{
    derived d;
    cout<<d.a<<endl; // prints 0
    cout<<d.b<<endl; // prints 1
    return 0;
}