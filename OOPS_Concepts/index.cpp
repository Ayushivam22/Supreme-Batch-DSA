#include<iostream>
using namespace std;
class Animal
{
    int a;
    public:
    virtual void sound()
    {
        cout<<"Animal makes sound"<<endl;
    }
};
class Dog :public Animal
{
    public:
    void sound()
    {
        cout<<"Dog barks"<<endl;
    }
};
int main()
{
    Animal *a=new Dog();
    a->sound();
    // cout << "hello world"<< endl;
}