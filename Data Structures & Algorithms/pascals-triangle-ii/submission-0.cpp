class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        
        vector<int> cur={1};
        vector<int> prev=getRow(rowIndex-1);

        for(int i=1;i<rowIndex;i++){
            cur.push_back(prev[i-1]+prev[i]);
        }
        cur.push_back(1);
        return cur;
    }
};