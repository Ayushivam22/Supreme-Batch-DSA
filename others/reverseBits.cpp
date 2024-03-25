#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// For the second test case :
// Since the given number N = 12 is represented as 00000000000000000000000000001100 in its binary representation. So after reversing the bits, it will become 0110000000000000000000000000000, which is equal to 805306368 only. So the output is .
// 1879048192
// 805306368
void print(unsigned long n);
long reverseBits(unsigned long n) {
    unsigned long a=n;
    for(int i=0;i<32;i++)
    {
        if((n&(1<<i))>>(i))
        {
            if(a==0)break;
            print(a);
            a=(1<<(31-i))|a;
            print(a);
            a=(1<<i)^a;
            print(a);
        }
    }
    if(n&1)a+=pow(2,32);
    return a;
}
void print(unsigned long n)
{
    for(int i=31;i>=0;i--)
    {
        cout<<((n&(1<<i))>>i);
    }
    cout<<endl;
    return;
}
int main(){
    unsigned long n=3;
    unsigned long a=reverseBits(n);
    cout<<a;
}
    




    
// void bitstoarray(int n,vector<int> &arr)
// {
//     int i=31;
//     while(n != 0 && i>=0)
//     {
//         arr[i] = n&1;
//         n=n>>1;
//         i--;
//     }
//     return ;
// }
// void reverse(long n,vector<int> &arr) {
//     // Write your code here.
//     int start=0,end=arr.size()-1;
//     while(start<end)
//     {
//         swap(arr[start++],arr[end--]);
//     }
//     return;
// }
// long bintodeci(vector<int> &arr)
// {
//     long sum=0;
//     for(int i=0;i<arr.size();i++)
//     {
//         sum=sum+(arr[i]*pow(2,i));
//     }
//     return sum;
// }
    
    