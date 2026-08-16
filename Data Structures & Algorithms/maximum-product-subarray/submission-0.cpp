class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        vector<vector<int>> dp(n,vector<int>(n,1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i==j){
                    dp[i][j]=nums[i];
                }
                else dp[i][j]=dp[i][j-1]*nums[j];
                mx=max(mx,dp[i][j]);
            }
        }
        return mx;
    }
};
