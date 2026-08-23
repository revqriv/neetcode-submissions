class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> stack;
        int n=temperatures.size();
        vector<int> ans(n,0);
        for(int i=0;i<temperatures.size();i++){
            int t=temperatures[i];
            while(!stack.empty() && t>stack.top().first){
                auto pair=stack.top();
                stack.pop();
                ans[pair.second]=i-pair.second;
            
            }
            stack.push({t,i});
        }
        return ans;
    }
};
