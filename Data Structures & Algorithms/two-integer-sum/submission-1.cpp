class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> idx;
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(idx.find(diff)!=idx.end()){
                return {idx[diff],i};
            }
            idx.insert({nums[i],i});
        }
        return {};
    }
};
