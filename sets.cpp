#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> a;
    a.insert(5);
    a.insert(5);
    a.insert(6);
    a.insert(6);
    cout<<a.size()<<endl;
}