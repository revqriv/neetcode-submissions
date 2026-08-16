class Solution {
public:
    vector<int> parent;
    bool validTree(int n, vector<vector<int>>& edges) {
        parent.resize(n+1);
        iota(parent.begin(),parent.end(),0);
        for(auto& e:edges){
            if(unite(e[0],e[1])){
                return false;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(find(i)==i) count++;
        }
        if(count>1) return false;
        return true;
    }
    int find(int x){
        if(parent[x]!=x) parent[x]=find(parent[x]);
        return parent[x];
    }
    bool unite(int x,int y){
        int px=find(x);
        int py=find(y);
        if(px==py) return true;
        parent[px]=py;
        return false;
    }
};
