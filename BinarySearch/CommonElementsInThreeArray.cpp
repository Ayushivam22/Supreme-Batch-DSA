#include <iostream>
#include <vector>

using namespace std;
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    // code here.
    int i = 0, j = 0, k = 0;
    vector<int> ans;
    int index = max(max(n1, n2), max(n2, n3));
    while (max(max(i, j), max(j, k)) != index)
    {
        if (A[i] > B[j])
            j++;
        else if (A[i] < B[j])
            i++;
        else if (A[i] > C[k])
            k++;
        else if (A[i] < C[j])
            i++;
        else
        {
            if ((A[i] == B[j]) && A[i] == C[k])
            {
                ans.push_back(A[i]);
                cout << "i:" << i << " j:" << j << "k:" << k << endl;
            }
            i++;
        }
    }

    int jj = 0;
    vector<int> ans2;
    while (ans[jj] != 0)
    {
        if (ans2.size() == 0)
            ans2.push_back(ans[jj++]);
        else if (ans2.size() != 0 && ans2[ans2.size() - 1] != ans[jj])
        {
            ans2.push_back(ans[jj++]);
            cout << "i:" << i << " j:" << j << "k:" << k << endl;
        }
        else
            jj++;
    }

    return ans2;
}

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }
    int B[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }
    int C[n3];
    for (int i = 0; i < n3; i++)
    {
        cin >> C[i];
    }
    vector<int> ans = commonElements(A, B, C, n1, n2, n3);
    // cout<<"Hello";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
