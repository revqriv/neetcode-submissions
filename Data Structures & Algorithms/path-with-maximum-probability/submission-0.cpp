class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int,vector<pair<int,double>>> adj;
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        priority_queue<pair<double,int>> pq;
        pq.push({1,start_node});
        set<int> visited;
        while(!pq.empty()){
            auto[prob,node]=pq.top();
            pq.pop();
            if(node==end_node){
                return prob;
            }
            if(visited.count(node)) continue;
            visited.insert(node);
            for(auto const& neighbor:adj[node]){
                if(!visited.count(neighbor.first)){
                    pq.push({prob*neighbor.second,neighbor.first});
                }
            }
        }
        return 0;
    }
};