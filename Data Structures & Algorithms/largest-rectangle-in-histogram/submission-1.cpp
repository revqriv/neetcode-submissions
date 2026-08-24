class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> height;
        int n=heights.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int flag=0;
            int j=0;
            while(!height.empty() && heights[i]<height.top().second){
                auto temp=height.top();
                height.pop();
                ans=max(ans, temp.second*(i-temp.first));
                flag=1;
                j=temp.first;
            }
            if(flag==1){
                height.push({j,heights[i]});
            }
            else{
                height.push({i,heights[i]});
            }
        }
        while(!height.empty()){
            auto temp=height.top();
            height.pop();
            ans=max(ans, temp.second*(n-temp.first));
        }
        return ans;
    }
};
