class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0];
        int curSum=0;
        for(int num:nums){
            if(curSum<0){
                curSum=0;
            }
            curSum+=num;
            mx=max(mx,curSum);
        }
        return mx;
    }
};
