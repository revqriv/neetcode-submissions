class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> count={};
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]>=1){
                nums.erase(nums.begin()+i);
                i--;
            }
            count[nums[i]]++;
        }
        return nums.size();
    }
};