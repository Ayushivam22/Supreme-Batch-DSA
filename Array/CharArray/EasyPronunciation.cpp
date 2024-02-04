#include <bits/stdc++.h>
using namespace std;
bool isConsonants(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return false;
    return true;
}
bool easy(string S,int n)
{
    if (n < 4)
        return true;
    else
    {
        int i = 0;
        int count = 0;
        while (i<=n-4)
        {
            
            for (int j = 0; j < 4-count; j++)
            {
                // if (count >= 4)
                // {
                //     return false;
                if (isConsonants(S[i + j]))
                    count++;
                else{
                    count=0;
                    break;
                }
            }
            if(count >= 4) return false;
            i++;
        }
        return true;
    }
}

int main()
{
    // your code goes here
    /*
    15
    schtschurowskia
        */
    int n;
    cin >> n;
    string S;
    cin >> S;
    cout<<easy(S,n)<<endl;
}
