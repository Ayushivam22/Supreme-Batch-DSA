#include <bits/stdc++.h>
using namespace std;

int findLastOccurrence(vector<int> arr, int target) {
    int n=arr.size();
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> one(n+1,0);
	    vector<int> two(n+1,0);
	    
	    for(int i=1;i<=n;i++){
	        int x;
	        cin>>x;
            one[i]=one[i-1];
            two[i]=two[i-1];
	        if(x==2){
	            two[i]++;
	        }else{
	            one[i]++;
	        }
	    }
	    
	    int ans=0;
	    
	    for(int i=0;i<=n;i++){
	        int oi=findLastOccurrence(one,one[i]);
	        int ti=findLastOccurrence(two,two[i]);
	        
	        ans+=max(oi-i,ti-i);
	    }
	    
	    cout<<ans<<endl;
	}
}