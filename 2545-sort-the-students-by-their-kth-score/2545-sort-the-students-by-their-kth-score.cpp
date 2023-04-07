class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
       sort(score.begin(),score.end(),[&](vector<int>A,vector<int>B){return A[k]>B[k];});
        return score;
    }
};