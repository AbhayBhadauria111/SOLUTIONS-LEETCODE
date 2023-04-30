class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       unordered_set<int>Aval,Bval,common;
        vector<int>ans(A.size(),0);
        for(int i=0;i<A.size();i++)
        {
            Aval.insert(A[i]);
            Bval.insert(B[i]);
            if(Aval.find(B[i])!=Aval.end())common.insert(B[i]);
            if(Bval.find(A[i])!=Bval.end())common.insert(A[i]);
            ans[i]=common.size();
        }
        return ans;
    }
};