class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> cur;
        bt(candidates,cur,target,0);
        return ans;
    }
    void bt(vector<int>candidates, vector<int>cur, int target, int i){
        if(target==0){
            ans.push_back(cur);
            return;
        }
        if(target<0 || candidates.size()<=i){
            return;
        }
        for(int j=i; j<candidates.size(); j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            cur.push_back(candidates[j]);
            bt(candidates, cur, target-candidates[j], j+1);
            cur.pop_back();
        }
    }
};
