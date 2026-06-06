class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    long long temp=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(temp==(long long)target){
                        vector<int> tol={nums[i],nums[j],nums[left],nums[right]};
                        ans.push_back(tol);
                        left++;
                        right--;
                        while(left<right && nums[left-1]==nums[left]){
                            left++;
                        }
                        while(left<right && nums[right+1]==nums[right]){
                            right--;
                        }
                    }
                    else if(temp<(long long)target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};