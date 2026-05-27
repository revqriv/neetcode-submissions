class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int start=0;
        int end=1;
        for(int i=1;i<nums.size();i++){
            for(int j=start;j<end;j++){
                if(nums[j]==nums[end]){
                    if(end-j<=k){
                        return true;
                    }
                }
            }
            end++;
        }
        return false;        
    }
};