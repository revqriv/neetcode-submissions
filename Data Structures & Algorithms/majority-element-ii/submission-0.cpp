class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash={};
        vector<int> ans={};
        int n=(nums.size())/3;
        for(int i:nums){
            hash[i]++;
        }
        for (const auto& [key, value] : hash) {
            if(value>n){
                ans.push_back(key);
            }
        }
        return ans;
    }
};