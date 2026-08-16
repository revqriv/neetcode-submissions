class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        unordered_map<int, vector<pair<int,int>>> adj;
        for(int i=0;i<points.size();i++){
            for(int j=0;j<points.size();j++){
                int dist=abs(points[i][0]-points[j][0]) +  abs(points[i][1]-points[j][1]);
                adj[i].push_back({dist,j});
                adj[j].push_back({dist,i});
            }
        }
        int res=0;
        unordered_set<int> visited;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();
            int cost=curr.first;
            int i=curr.second;
            if(visited.count(i)) continue;
            visited.insert(i);
            res+=cost;
            for(const auto& nei:adj[i]){
                int nei_cost=nei.first;
                int nei_i=nei.second;
                if(!visited.count(nei_i)){
                    pq.push({nei_cost,nei_i});
                }
            }
        }
        return res;
    }
};
