#include<stdio.h>
int fact(int a){
    int fac=1;
    for(int i = 1; i <=a;i++){
        fac*=i;
    }
    return fac;
    } 

int ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r)) ;
}
int main(){
    int row, col;
    int n=5;
    for(int i=0)
}