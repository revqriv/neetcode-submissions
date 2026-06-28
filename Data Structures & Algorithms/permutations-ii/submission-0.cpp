class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> cur;
        sort(nums.begin(),nums.end());
        vector<bool> used(nums.size(),false);
        bkt(nums,used,cur); 
        return ans;
    }
    void bkt(vector<int>& nums, vector<bool>& used, vector<int>& cur){
        if(nums.size()==cur.size()){
            if(find(ans.begin(),ans.end(),cur)!=ans.end()) return;
            ans.push_back(cur);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            used[i]=true;
            cur.push_back(nums[i]);
            bkt(nums,used,cur);
            cur.pop_back();
            used[i]=false;
        }
    }
};