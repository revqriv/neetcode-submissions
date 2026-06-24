class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push({freq[i],'a'+i});
            }
        }
        string res="";
        pair<int,char> prev = {0,' '};
        while(!pq.empty() || prev.first>0){
            if(prev.first>0 && pq.empty()){
                return "";
            }
            auto[count, chr] = pq.top();
            pq.pop();
            res+=chr;
            count--;
            if(prev.first>0){
                pq.push(prev);
            }
            prev={count,chr};
        }
        return res;
    }
};