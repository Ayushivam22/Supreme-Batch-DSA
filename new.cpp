#include<iostream>
using namespace std;
void update(int&n){
    n++;
    cout << n<< endl;
}
int main(){
    int n;
    n=5;
    update(n);
    cout << n << endl;
}