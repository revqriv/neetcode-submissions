class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cur;
    vector<vector<int>> combine(int n, int k) {
        vector<int> rng;
        for(int i=1;i<=n;i++){
            rng.push_back(i);
        }
        bkt(rng,0,k);
        return ans;
    }
private:
    void bkt(vector<int>& rng,int i,int k){
        if(cur.size()==k){
            ans.push_back(cur);
            return;
        }
        if(cur.size()>k || i>=rng.size()) return;
        for(int j=i;j<rng.size();j++){
            cur.push_back(rng[j]);
            bkt(rng,j+1,k);
            cur.pop_back();
        }
    }
};