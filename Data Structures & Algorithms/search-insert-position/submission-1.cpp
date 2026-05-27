class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int index=0;
        int mid=0;
        while(start<=end){
            mid=start + (end-start)/2;
            if(nums[mid]>target){
                end=mid-1;
                index=mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
                index=mid+1;
            }
            else{
                return mid;
            }
        }
        return index;
    }
};