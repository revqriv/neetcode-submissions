class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxsum=0;
        unordered_map<int,int> count;
        int left=0;
        int freq=0;
        for(int right=0;right<s.size();right++){
            count[s[right]]++;
            freq=max(freq,count[s[right]]);

            while(right-left+1-freq>k){
                count[s[left]]--;
                left++;
            }
            maxsum=max(maxsum,right-left+1);
        }
        return maxsum;
    }
};
