#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void print(vector<int> arr){
    cout << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr ;
    int n;
    cin >> n;
    for(int i=0; i < n;i++){
        int ar;
        cin >> ar;
        arr.push_back(ar);
    }
    vector<int> ans;
    // cout <<arr.size()<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        int a=arr[i]*arr[i];
        // cout << a << endl;
        ans.push_back(a);
    }
    // cout <<ans.size()<<endl;
    print(ans);
    for (int i = 1; i < ans.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (ans[j] <= ans[j - 1])
            {
                swap(ans[j], ans[j - 1]);
                
            }
        }
    }
    print (ans);

    
}