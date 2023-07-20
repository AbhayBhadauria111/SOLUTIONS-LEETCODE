class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>arr;
        arr.push_back(asteroids[0]);
        bool flag=0;
        for(int i=1;i<asteroids.size();i++)
        {
            flag=0;
            while(arr.size()>0 and arr.back()>0 and asteroids[i]<0)
            {
                if(abs(arr.back())==abs(asteroids[i])){arr.pop_back();flag=1;break;}
                else if(abs(arr.back())>abs(asteroids[i])){flag=1;break;}
                else arr.pop_back();
            }
            if(!flag)arr.push_back(asteroids[i]);
        }
        return arr;
    }
};