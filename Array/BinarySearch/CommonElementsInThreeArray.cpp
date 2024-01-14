#include<iostream>
#include <vector>

using namespace std;
vector<int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0,j=0,k=0,count=0;
            vector<int> ans(100,0);
            // int index=max(max(n1,n2),max(n2,n3));
            while(i!=n1 && j!=n2 && k!=n3){
                if(A[i]>B[j])j++;
                else if(A[i]<B[j])i++;
                else if(A[i]>C[k])k++;
                else if(A[i]<C[j])i++;
                else {
                    if(ans[count]==0)ans[count++]=A[i++];
                    else i++;
            }
            }
            int jj=0;
            vector<int> ans2;
            while(ans[jj]!=0){
                if(ans2.size()==0)ans2.push_back(ans[jj++]);
                else if(ans2.size()!=0 && ans2[ans2.size()-1]!=ans[jj])
                ans2.push_back(ans[jj++]);
                else jj++;
            }
            return ans2;
        }
int main(){
    cout<<"hi";
}
    