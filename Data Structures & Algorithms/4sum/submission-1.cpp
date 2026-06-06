class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    long long temp=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(temp==(long long)target){
                        vector<int> tol={nums[i],nums[j],nums[left],nums[right]};
                        if(count(ans.begin(),ans.end(),tol)){
                            int o;
                        }
                        else{
                            ans.push_back(tol);
                        }
                        left++;
                        right--;
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