class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count={};
        for(int i : nums){
            count[i]++;
        }
        int ans=0;
        int max=0;
        for(const auto& pair:count){
            if(pair.second>max){
                max=pair.second;
                ans=pair.first;
            }
        }
        return ans;
    }
};