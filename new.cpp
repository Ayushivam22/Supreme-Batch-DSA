#include <bits/stdc++.h>
using namespace std;
bool isConsonants(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return false;
    return true;
}
int main()
{
    // your code goes here
    /*
    15
    schtschurowskia
        */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string S;
        cin >> S;
        if(n<4)cout<<"YES"<<endl;
        else{
            int i = 0;
            bool ans = true;
            while (S[i] != '\0')
            {
                int count = 0;
                for (int j = 0; j < 4; j++)
                {
                    if (count >= 4)
                    {
                        ans = false;
                        break;
                    }

                    if (isConsonants(S[i+j]))
                        count++;
                    else exit(0);
                }
                i++;
            }
            if (ans)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
