class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<names.size();i++)
        {
            for(int j=1;j<names.size();j++)
            {
                if(heights[j]>heights[j-1])
                {
                    int t=heights[j-1];
                    heights[j-1]=heights[j];
                    heights[j]=t;
                    string temp=names[j-1];
                    names[j-1]=names[j];
                    names[j]=temp;
                }
            }
        }
        return names;
    }
};