#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str="";
    str.insert(0,"aa");
    str.insert(1,"bb");
    cout<<str<<endl;
    cout<<str.size()<<endl;

}