class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int idx=n-1;
        vector<int> ans(n);
        while(l<=r){
            if(nums[l]*nums[l]>nums[r]*nums[r]){
                ans[idx]=nums[l]*nums[l];
                l++;
            }
            else if(nums[l]*nums[l]<=nums[r]*nums[r]){
                ans[idx]=nums[r]*nums[r];
                r--;
            }
            idx--;
        }
        return ans;
    }
};