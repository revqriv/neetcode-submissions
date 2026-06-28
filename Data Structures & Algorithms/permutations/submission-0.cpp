class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), false);
        vector<int> cur;
        bkt(nums,used,cur);
        return ans;
    }
    void bkt(vector<int>& nums,vector<bool>& used,vector<int>& cur){
        if(cur.size()==nums.size()){
            ans.push_back(cur);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(used[i]) continue;
            used[i] = true;
            cur.push_back(nums[i]);
            bkt(nums, used, cur);
            cur.pop_back();
            used[i] = false;
        }
    }
};
