class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int sum=0;
        int mi=100001;
        for(right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                mi=min(mi,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        if(mi==100001){
            return 0;
        }
        return mi;
    }
};