class Solution {
public:
    int minInsertions(string s) {
        vector<vector<int>> tbl(s.size(), vector<int>(s.size(), INT_MIN));
        return f1(0, s.size()-1, s, tbl);
    }
private:
    int f1(int i, int j, string& s, vector<vector<int>> &tbl) {
        if(tbl[i][j] != INT_MIN) return tbl[i][j];
        if(i == j) return tbl[i][j] = 0;
        else if(j == i+1) {
            return tbl[i][j] = ((s[i] == s[j]) ? 0 : 1);
        } else {
            tbl[i][j] = min(1 + f1(i+1, j, s, tbl), 1 + f1(i, j-1, s, tbl));
            if(s[i] == s[j]) {
                tbl[i][j] = min(tbl[i][j], f1(i+1, j-1, s, tbl));
            }
            return tbl[i][j];
        }
    }
};