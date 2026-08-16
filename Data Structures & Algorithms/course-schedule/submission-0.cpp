class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> state(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(auto& pre:prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }
        for(int i=0; i<numCourses; i++){
            if(state[i]==0){
                if(!dfs(i,state,adj)) 
                    return false;
            }
        }
        return true;
    }
    bool dfs(int node,vector<int>& state,vector<vector<int>>& adj){
        if(state[node]==2) return true;
        if(state[node]==1) return false;
        state[node]=1;
        bool temp=true;
        for(int neighbor:adj[node]){
            if(dfs(neighbor,state,adj)==false){
                temp=false;
            }
        }
        state[node]=2;
        return temp;
    }
};
