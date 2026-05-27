class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxL=0;
        unordered_map<char,int> count;
        for(int i=0;i<s.size();i++){
            while(count[s[i]]>0){
                count[s[start]]--;
                start++;
            }
            count[s[i]]++;
            maxL=max(maxL,i-start+1);
        }
        return maxL;
    }
};
