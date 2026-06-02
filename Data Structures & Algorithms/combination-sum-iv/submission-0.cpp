class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> memo(target+1,0);
        memo[0]=1;
        int sum=0;
        for(int i=1;i<target+1;i++){
            for(int j=0;j<nums.size();j++){
                if(i>=nums[j]){
                    memo[i]+=memo[i-nums[j]];
                }
            }
        }
        return memo[target];
    }
};