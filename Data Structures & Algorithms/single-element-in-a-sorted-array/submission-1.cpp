class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if((mid==nums.size()-1 || nums[mid]!=nums[mid+1]) && (mid==0 || nums[mid]!=nums[mid-1])){
                return nums[mid];
            }
            else if(nums[mid]==nums[mid+1]){
                if(mid%2==0){
                    start=mid+2;
                }
                else{
                    end=mid-1;
                }
            }
            else if(nums[mid-1]==nums[mid]){
                if((mid-1)%2==0){
                    start=mid+1;
                }
                else{
                    end=mid-2;
                }
            }
        }
    }
};