class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> memo(n+1,n+1);
        memo[0]=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=nums[i];j++){
                if(i+j<n){
                    memo[i+j]=min(memo[i+j],memo[i]+1);
                }
            }
        }
        return memo[n-1];
    }
};
