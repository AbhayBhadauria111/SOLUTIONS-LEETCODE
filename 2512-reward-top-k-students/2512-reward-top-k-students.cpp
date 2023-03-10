class Solution {
public:
    static bool comp(pair<int,int> p1,pair<int,int>p2)
    {
        if(p1.second>p2.second)return true;
        if(p1.second<p2.second)return false;
        if(p1.second==p2.second)
        {
            if(p1.first<p2.first)return true;
            if(p1.first>p2.first)return false;
        }
        return true;
    }
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        vector<pair<int,int>>point_record;
        //{stu_id,stu_points}
        unordered_set<string>pos(positive_feedback.begin(),positive_feedback.end());
        unordered_set<string>neg(negative_feedback.begin(),negative_feedback.end());
        for(int i=0;i<report.size();i++)
        {
            pair<int,int>temp={student_id[i],0};
            vector<string>words;
            string l="";
            for(int j=0;j<report[i].size();j++)
            {
                if(j==report[i].size()-1 or report[i][j]==' '){
                    if(report[i][j]!=' ')l+=report[i][j];
                    words.push_back(l);
                    l="";}
                else if(report[i][j]!=' ') l+=report[i][j];
            }
            for(string word:words)
            {
                if(pos.find(word)!=pos.end())temp.second+=3;
                if(neg.find(word)!=neg.end())temp.second-=1;
            }
            point_record.push_back(temp);
        }
        sort(point_record.begin(),point_record.end(),comp);
        vector<int>ans;
        for(int i=0;i<k;i++)
            ans.push_back(point_record[i].first);
        return ans;
    }
};