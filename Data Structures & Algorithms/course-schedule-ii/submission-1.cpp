class Solution {
public:
    vector<int> ans;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> state(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(auto& pre:prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }
        for(int i=0;i<numCourses;i++){
            if(state[i]==0){
                if(!dfs(i,state,adj)){
                    return {};
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool dfs(int node,vector<int>& state,vector<vector<int>>& adj){
        if(state[node]==1) return false;
        if(state[node]==2) return true;
        state[node]=1;
        bool temp=true;
        for(int neighbor:adj[node]){
            if(!dfs(neighbor,state,adj)){
                temp=false;
            }
        }
        ans.push_back(node);
        state[node]=2;
        return temp;
    }

};
