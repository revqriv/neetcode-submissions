class Solution {
public:
    vector<int> parent;
    int countComponents(int n, vector<vector<int>>& edges) {
        parent.resize(n+1);
        iota(parent.begin(),parent.end(),0);
        for(auto& e:edges){
            unite(e[0],e[1]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(find(i)==i) count++;
        }
        return count;
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
