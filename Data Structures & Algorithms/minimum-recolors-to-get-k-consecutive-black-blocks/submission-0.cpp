class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                count++;
            }
        }
        int min_count=count;
        for(int j=k;j<blocks.size();j++){
            if(blocks[j]=='W'){
                count++;
            }
            if(blocks[j-k]=='W'){
                count--;
            }
            min_count=min(min_count,count);
        }
        return min_count;
    }
};