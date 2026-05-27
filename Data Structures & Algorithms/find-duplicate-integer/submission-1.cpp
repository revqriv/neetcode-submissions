class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> count={};
        for(int i : nums){
            count[i]++;
            if(count[i]>1){
                return i;
            }
        }
    }
};
