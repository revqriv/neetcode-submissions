class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        for(int num:nums){
            if(left<2 || num!=nums[left-2]){
                nums[left]=num;
                left++;
            }
        }
        return left;
    }
};