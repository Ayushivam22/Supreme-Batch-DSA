#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[100];
    for(int i=0; i<10; i++){
        cin >> str[i];
    }
    
    for(int i=0; i<10; i++){
        cout << str[i];
    }
}