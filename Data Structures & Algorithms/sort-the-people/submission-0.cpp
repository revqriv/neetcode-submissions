class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        vector<int> idx(n);
        iota(idx.begin(),idx.end(),0);
        sort(idx.begin(),idx.end(), [&](int a,int b){
            return heights[a]>heights[b];
        });
        vector<string> res;
        for(int i:idx){
            res.push_back(names[i]);
        }
        return res;
    }
};