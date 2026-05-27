class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int minz=nums[nums.size()-1];
        for(int i=0;i<nums.size()-k+1;i++){
            minz=min(minz,nums[i+k-1]-nums[i]);
        }
        return minz;
    }
};