class Solution {
public:
    vector<int> parent;
    vector<int> size;
    int find(int x){
        if(parent[x]!=x) parent[x]=find(parent[x]);
        return parent[x];
    }
    bool unite(int x,int y){
        int px=find(x),py=find(y);
        if(px==py) return false;
        if(size[px]<size[py]) swap(px,py);
        size[px]+=size[py];
        parent[py]=px;
        return true;

    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        parent.resize(points.size());
        size.resize(points.size(),1);
        iota(parent.begin(),parent.end(),0);
        vector<array<int,3>> edges;
        for(int i=0;i<points.size();i++){
            for(int j=0;j<points.size();j++){
                int dist=abs(points[i][0]-points[j][0])+
                abs(points[i][1]-points[j][1]);
                edges.push_back({dist,i,j});
            }
        }
        sort(edges.begin(),edges.end());
        int res=0;
        for(auto& [dist,u,v]:edges){
            if(unite(u,v)){
                res+=dist;
            }
        }
        return res;
    }
};
