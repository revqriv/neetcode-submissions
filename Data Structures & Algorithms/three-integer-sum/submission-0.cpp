class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans={};
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
            int target=-nums[i];
            while(l<r){
                if(nums[l]+nums[r]==target){
                    vector<int> temp={nums[i],nums[r],nums[l]};
                    if(find(ans.begin(),ans.end(),temp)==ans.end()){
                        ans.push_back(temp);
                    }
                    r--;
                    l++;
                }
                else if(nums[l]+nums[r]<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return ans;
    }
};
