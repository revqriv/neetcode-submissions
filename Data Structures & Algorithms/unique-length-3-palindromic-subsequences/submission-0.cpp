class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res=0;
        for(char c='a';c<='z';c++){
            int l=s.find(c);
            int r=s.rfind(c);
            if(l==r || l==-1) continue;
            unordered_set<char> mid;
            for(int i=l+1;i<r;i++){
                mid.insert(s[i]);
            }
            res+=mid.size();
        }
        return res;
    }
};