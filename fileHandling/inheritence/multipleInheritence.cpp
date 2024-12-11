#include<bits/stdc++.h>
using namespace std;
class animal
{
    public:
    void walk()
    {
        cout<<"Animal walking."<<endl;
    }
};
class bird :virtual public animal
{
    public:
    void fly()
    {
        cout<<"Bird flying."<<endl;
    }
};
class bird2 :public bird,virtual public animal
{
    public:
    void sing()
    {
        cout<<"Sparrow singing."<<endl;
    }
};
int main()
{
    bird sparrow;
    sparrow.walk();
    sparrow.fly();

    bird2 sparrow2;
    sparrow2.walk();
    sparrow2.fly();
    sparrow2.sing();
}