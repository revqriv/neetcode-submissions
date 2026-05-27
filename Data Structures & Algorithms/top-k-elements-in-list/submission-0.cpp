class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count={};
        for(int i : nums){
            count[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto const& [num,freq]: count){ 
            pq.push({freq,num});
        }
        vector<int> ans={};
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
