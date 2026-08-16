class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int,vector<pair<int,int>>> adj;
        for(const auto& t:times){
            adj[t[0]].push_back({t[1],t[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});
        set<int> visited;
        int ans=0;
        while(!pq.empty()){
            auto[d,node]=pq.top();
            pq.pop();
            if(visited.count(node)) continue;
            visited.insert(node);
            ans=d;
            for(const auto& neighbor:adj[node]){
                if(!visited.count(neighbor.first)){
                    pq.push({d+neighbor.second,neighbor.first});
                }
            }
        }
        return visited.size()==n?ans:-1;
    }
};
