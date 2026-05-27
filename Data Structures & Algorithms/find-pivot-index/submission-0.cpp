class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        int left=0;
        int right=0;
        for(int i : nums){
            right+=i;
        }
        for(int i=0;i<nums.size();i++){
            if(left==right-nums[i]){
                return i;
            }
            else{
                left+=nums[i];
                right-=nums[i];
            }
        }
        return ans;
    }
};