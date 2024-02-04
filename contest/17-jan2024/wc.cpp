#include <bits/stdc++.h>
#include<cmath>
#include<algorithm>
using namespace std;
int weapon(int h, int x, int y1, int y2, int k)
{
    int hit1 = 0, hit2 = 0, dam2 = 0;
    
    hit1 = (h / x);
    if(h%x!=0)  hit1++;
    
    dam2 = y1 * k;
    
    if (dam2 >= h)
    {
        hit2=(h/y1);
        if(h%y1!=0) hit2++;
    }
    else
    {
        hit2 = k+ (((h - dam2) /y2));  
        if((h-dam2)%y2!=0) hit2++;
    }
    
    return min(hit1, hit2);
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;
        cout<<weapon(h,x,y1,y2,k)<<endl;
    }
}
