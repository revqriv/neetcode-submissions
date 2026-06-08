class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ans;
        for(int i:asteroids){
            bool flag=0;
            while(!ans.empty() && ans.top()>0 && i<0){
                if(abs(ans.top())==abs(i)){
                    ans.pop();
                    flag=1;
                    break;
                }
                else if(abs(ans.top())>abs(i)){
                    flag=1;
                    break;
                }
                else{
                    ans.pop();
                    continue;
                }
            }
            if(!flag){
                ans.push(i);
            }
        }
        vector<int> fin;
        while(!ans.empty()){
            fin.push_back(ans.top());
            ans.pop();
        }
        reverse(fin.begin(),fin.end());
        return fin;
    }
};