class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans={{}};
        int start=0;
        for(int i=0;i<nums.size();i++){
            int sz=ans.size();
            int j=(i>0 && nums[i]==nums[i-1])?start:0;
            start=sz;
            for(j;j<sz;j++){
                vector<int> temp=ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
