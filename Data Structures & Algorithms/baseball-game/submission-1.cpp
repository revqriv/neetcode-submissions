class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score={};
        for(int i=0;i<operations.size();i++){
            try{
                int val = stoi(operations[i]);
                score.push(val);
            }
            catch (invalid_argument& e) {
            }
            if(operations[i][0]=='+'){
                int x=score.top();
                score.pop();
                int y=(score.top()+x);
                score.push(x);
                score.push(y);
            }
            else if(operations[i][0]=='C'){
                score.pop();
            }
            else if(operations[i][0]=='D'){
                score.push(score.top()*2);
            }
        }
        int sum=0;
        while(!score.empty()){
            sum=sum+score.top();
            score.pop();
        }
        return sum;
    }
};