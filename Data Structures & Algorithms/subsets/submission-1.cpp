class Solution {
public:
    vector<int> cur={};
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        bkt(nums,0);
        return ans;
    }
private:
    void bkt(vector<int>& nums,int i){
        ans.push_back(cur);
        if(cur.size()==nums.size()) return;
        for(int j=i;j<nums.size();j++){
            cur.push_back(nums[j]);
            bkt(nums,j+1);
            cur.pop_back();
        }
        return;
    }
};
