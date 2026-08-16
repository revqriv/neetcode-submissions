class Solution {
public:
    vector<int> parent;
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        parent.resize(edges.size()+1);
        iota(parent.begin(),parent.end(),0);
        for(auto& e:edges){
            if(!unite(e[0],e[1])){
                return e;
            }
        }
        return {};
    }
    int find(int x){
        if(parent[x]!=x) parent[x]=find(parent[x]);
        return parent[x];
    }
    bool unite(int x,int y){
        int px=find(x);
        int py=find(y);
        if(px==py) return false;
        parent[px]=py;
        return true;
    }  
};
