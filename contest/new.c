#include <stdio.h>
#include<math.h>
// int power(int a, int b)
// {
//     int res = 1;
//     for (int i = 0; i < b; i++)
//     {
//         res *= a;
//     }
//     return res;
// }
int decimaltobinary(int decimal, long binary, int i)
{

    if (decimal == 0)
        return binary;
    int rem = decimal % 2;
    binary = rem * ((int)round(pow(10, i))) + binary;
    // printf("Decimal: %d rem: %d binary:%d i:%d\n", decimal, rem,binary,i);
    return decimaltobinary(decimal / 2, binary, ++ i);
}
int main()
{
    int decimal = 5;
    long binary = 0;
    printf("The binary of %d is :%ld", decimal, decimaltobinary(decimal, binary, 0));
    return 0;
}