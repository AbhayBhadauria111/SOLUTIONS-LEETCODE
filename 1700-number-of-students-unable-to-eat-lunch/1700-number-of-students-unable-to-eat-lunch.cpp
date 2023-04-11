class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>stu;
        queue<int>sand;
        for(int i=0;i<students.size();i++)
        {
            stu.push(students[i]);
            sand.push(sandwiches[i]);
        }
        while(!stu.empty())
        {
            if(stu.front()==sand.front()){stu.pop();sand.pop();}
            else
            {
                int count=0;
                while(stu.front()!=sand.front())
                {
                    count++;
                    if(count==sand.size())return stu.size();
                    stu.push(stu.front());
                    stu.pop();
                }
                stu.pop();sand.pop();
            }
        }
        return 0;
    }
};