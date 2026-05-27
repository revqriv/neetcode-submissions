class Solution {
public:
    int lowerbound(vector<int>& nums,int target){
        int start=0;
        int end=nums.size()-1;
        int index=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>=target){
                end=mid-1;
                index=mid;
            }
            else{
                start=mid+1;
            }
        }
        return index;
    }
    bool isMajorityElement(vector<int>& nums, int target) {
        int low=lowerbound(nums,target);
        int n=nums.size();
        if(nums[low+(n/2)]==target){
            return true;
        }
        else{
            return false;
        }
    }
};
