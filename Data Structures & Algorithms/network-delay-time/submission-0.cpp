class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int,vector<pair<int,int>>> adj;
        for(const auto& t:times){
            adj[t[0]].push_back({t[1],t[2]});
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dist(n+1,INT_MAX);

        dist[k]=0;
        pq.push({0,k});

        while(!pq.empty()){
            auto[d,node]=pq.top();
            pq.pop();
            if(d>dist[node]) continue;
            for(auto[neighbor,weight]:adj[node]){
                if(dist[node]+weight<dist[neighbor]){
                    dist[neighbor]=dist[node]+weight;
                    pq.push({dist[neighbor],neighbor});
                }
            }
        }
        int ans=*max_element(dist.begin()+1, dist.end());
        return ans==INT_MAX?-1:ans;
    }
};
