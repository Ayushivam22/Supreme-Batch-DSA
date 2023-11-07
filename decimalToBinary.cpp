#include <iostream>
#include <math.h>
using namespace std;
int pow(int x, int y){
    int pow=1;
    for(int i=0;i<y;i++){
        pow*=x;
    }
    return pow;
}
int main()
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    int i=0,bin=0;
    while(decimal!=0){
        int rem=decimal%2;
        bin =rem*pow(10,i++)+bin;
        decimal = decimal/2;

    }
    cout << bin;
    return 0;
}