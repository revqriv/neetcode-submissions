class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});
        string ans="";
        while(!pq.empty()){
            auto[count,chr]=pq.top();
            pq.pop();
            if(ans.size()>=2 && ans.back()==chr && ans[ans.size()-2]==chr){
                if(pq.empty()){
                    break;
                }
                auto[cnt2,chr2]=pq.top();
                pq.pop();
                ans+=chr2;
                if(cnt2-1>0){
                    pq.push({cnt2-1,chr2});
                }
                pq.push({count,chr});
            }
            else{
                ans+=chr;
                if(count-1>0){
                    pq.push({count-1,chr});
                }
            }
        }
        return ans;
    }
};