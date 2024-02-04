#include <bits/stdc++.h>
using namespace std;
int weapon(int h, int x, int y1, int y2, int k)
{
    int hit1 = 0, hit2 = 0, dam2 = 0;
    hit1 = ceil(h / (float)x);
    dam2 = y1 * k;
    if (dam2 >= h)
    {
        hit2=(int)(ceil(h/(float)y1));
    }
    else
    {
        hit2 = k+ (int)(ceil((h - dam2) / (float)y2));   
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
