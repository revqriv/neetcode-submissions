class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxsize=0;
        int first;
        int second;
        int size=0;
        for(int i=0;i<fruits.size();i++){
            first=fruits[i];
            second=fruits[i];
            for(int j=i+1;j<fruits.size();j++){
                if(fruits[j]!=fruits[i]){
                    second=fruits[j];
                    break;
                }
            }
            for(int j=i;j<fruits.size();j++){
                if(fruits[j]==first || fruits[j]==second){
                    size++;
                }
                else{
                    break;
                }
            }
            maxsize=max(maxsize,size);
            size=0;
        }
        return maxsize;
    }
};