class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last_idx[26] = {0};
        
        // Step 1: Store the last index of each character
        for(int i=0;i<s.length();i++) {
            last_idx[s[i]-'a']=i;
        }
        vector<int> ans;
        int start = 0, max_reach = 0;
        // Step 2: Extend the partition as far as necessary  
        for(int i=0;i<s.length();i++){
            max_reach = max(max_reach, last_idx[s[i]-'a']);
            
            // Reached the end of current partition
            if (i == max_reach) {
                ans.push_back(i-start+1);
                start=i+1;
            }
        }
        
        return ans;
    }
};
