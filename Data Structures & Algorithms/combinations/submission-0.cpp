class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cur;
    vector<vector<int>> combine(int n, int k) {
        vector<int> rng;
        for(int i=1;i<=n;i++){
            rng.push_back(i);
        }
        backtrack(rng,0,k);
        return ans;
    }
    void backtrack(vector<int> rng,int i,int k){
        if(cur.size()==k){
            ans.push_back(cur);
            return;
        }
        if(i>=rng.size()){
            return;
        }
        cur.push_back(rng[i]);
        backtrack(rng,i+1,k);
        cur.pop_back();
        backtrack(rng,i+1,k);
    }
};