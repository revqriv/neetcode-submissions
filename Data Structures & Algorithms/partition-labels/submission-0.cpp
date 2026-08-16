class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_set<char> use;
        unordered_map<char,int> count;
        for(int c:s){
            count[c]++;
        }
        int temp=0;
        for(int c:s){
            use.insert(c);
            temp++;
            count[c]--;
            int flag=0;
            for(char ch:use){
                if(count[ch]!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ans.push_back(temp);
                temp=0;
                use.clear();
            }
        }
        return ans;
    }
};
