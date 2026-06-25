class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans={{}};
        for(int i=0;i<nums.size();i++){
            int sz=ans.size();
            for(int j=0;j<sz;j++){
                vector<int> temp=ans[j];
                temp.push_back(nums[i]);
                if(find(ans.begin(),ans.end(),temp)==ans.end()){
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
