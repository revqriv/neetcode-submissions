class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        unordered_map<int,vector<pair<int,int>>> adj;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int idx=i*col+j;
                if(i+1<row){
                    adj[idx].push_back({(i+1)*col+j,grid[i+1][j]});
                }
                if(j+1<col){
                    adj[idx].push_back({i*col+j+1,grid[i][j+1]});
                }
                if(i-1>=0){
                    adj[idx].push_back({(i-1)*col+j,grid[i-1][j]});
                }
                if(j-1>=0){
                    adj[idx].push_back({i*col+j-1,grid[i][j-1]});
                }
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({grid[0][0],0}); //the value aka dist and its idx aka node
        set<int> visited;
        int last=(row-1)*col+col-1;
        while(!pq.empty()){
            auto[d,node]=pq.top();
            pq.pop();
            if(node==last){
                return d;
            }
            if(visited.count(node)) continue;
            visited.insert(node);
            for(const auto& neighbor:adj[node]){
                if(!visited.count(neighbor.first)){
                    pq.push({max(d,neighbor.second),neighbor.first});
                }
            }
        }
    }
};
