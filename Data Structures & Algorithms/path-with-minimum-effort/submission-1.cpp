class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        unordered_map<int,vector<pair<int,int>>> adj;
        int row=heights.size();
        int col=heights[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int idx=i*col+j;
                if(i+1<row){
                    int idx1=(i+1)*heights[0].size()+j;
                    adj[idx].push_back({idx1,abs(heights[i+1][j]-heights[i][j])});
                }
                if(j+1<col){
                    int idx2=(i)*heights[0].size()+j+1;
                    adj[idx].push_back({idx2,abs(heights[i][j+1]-heights[i][j])});
                }
                if(i-1>=0){
                    int idx1=(i-1)*heights[0].size()+j;
                    adj[idx].push_back({idx1,abs(heights[i-1][j]-heights[i][j])});
                }
                if(j-1>=0){
                    int idx2=(i)*heights[0].size()+j-1;
                    adj[idx].push_back({idx2,abs(heights[i][j-1]-heights[i][j])});
                }
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        set<int> visited;
        pq.push({0,0});
        int last=(row-1)*col+col-1;
        int ans=0;
        while(!pq.empty()){
            auto[d,node]=pq.top();
            if(node==last){
                ans=d;
                break;
            }
            pq.pop();
            if(visited.count(node)) continue;
            visited.insert(node);
            for(auto const& neighbor:adj[node]){
                if(!visited.count(neighbor.first)){
                    pq.push({max(d,neighbor.second),neighbor.first});
                }
            }
        }
        return ans;
    }
};