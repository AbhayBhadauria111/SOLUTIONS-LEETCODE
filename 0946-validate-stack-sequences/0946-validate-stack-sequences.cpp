class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>S;
        int k=0;
        for(int i=0;i<pushed.size();i++)
        {
            S.push(pushed[i]);
            while(S.size()>=1 and S.top()==popped[k])
            {
                S.pop();
                k++;
            }
        }
        if(S.size()==0)return true;
        return false;
    }
};