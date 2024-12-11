class Solution {
public:
    int max(int a,int b)
    {
        if(a>b)return a;
        return b;
    }
    int MOD=1e9+7;
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long ans1=0,sum=0,n=arr.size();
        for(int i:arr)
        {
            sum=(sum+i)%MOD;
        }
        if(sum>0)
        {
            ans1 = ((sum%MOD)*(k%MOD))%MOD;
        }
        int Sub = 0;
        int maxSub = INT_MIN;
        for(int i:arr)
        {
            if(Sub<0)Sub=0;
            Sub=(Sub+i)%MOD;
            maxSub=max(Sub,maxSub);
        }
        
        int right=0;
        int maxR=INT_MIN;
        for(int i:arr)
        {
            right+=i;
            maxR = max(maxR,right);
        }

        int left=0;
        int maxL=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            left+=arr[i];
            maxL = max(maxL,left);
            // if(left<0)break;
        }
        int ans2=0;
        if(k>1) ans2 = ((maxL%MOD+maxR%MOD)%MOD + (sum*(k-2))%MOD)%MOD;
        int ansz=maxL+maxR;
        if(k>1)ans2=max(ans2,ansz);
        int rrr=max(ans1,max(ans2,maxSub));
        cout<<ans1<<" "<<ans2<<" "<<maxSub<<" ";
        return rrr%MOD;

    }
};