class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>> dist(n+1,vector<int>(n+1,INT_MAX/2));

        for(int i=1;i<n+1;i++){
            dist[i][i]=0;
        }
        for(auto& time:times){
            int u=time[0],v=time[1],w=time[2];
            dist[u][v]=w;
        }

        for(int mid=1;mid<n+1;mid++){
            for(int i=1;i<n+1;i++){
                for(int j=1;j<n+1;j++){
                    dist[i][j]=min(dist[i][j],dist[i][mid]+dist[mid][j]);
                }
            }
        }
        int res= *max_element(dist[k].begin()+1,dist[k].end());
        return res==INT_MAX/2?-1:res;
    }
};
