class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums[nums.size()-1]-nums[0];
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canformpairs(nums,p,mid)){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;        
    }
private:
    bool canformpairs(vector<int>& nums,int p,int mid){
        int count=0;
        int i=0;
        while(i<nums.size()-1){
            if(nums[i+1]-nums[i]<=mid){
                i+=2;
                count++;
            }
            else i++;
        }
        return count>=p;
    }
};