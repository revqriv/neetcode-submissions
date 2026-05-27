class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        struct Compare{
            bool operator()(pair<int,int> const& p1, pair<int,int> const& p2){
                if(p1.first==p2.first){
                    return p1.second<p2.second;
                }
                return p1.first>p2.first;
            }
        };
        vector<int> ans={};
        unordered_map<int, int> count={};
        for(int i : nums){
            count[i]++;
        }
        typedef pair<int,int> frequency;
        priority_queue<frequency, vector<frequency>, Compare> min;
        for(const auto& pair : count){
            min.push(make_pair(pair.second,pair.first));
        }
        while(!min.empty()){
            pair<int,int> pq=min.top();
            for(int i=0;i<pq.first;i++){
                ans.push_back(pq.second);
            }
            min.pop();
        }
        return ans;
    }
};