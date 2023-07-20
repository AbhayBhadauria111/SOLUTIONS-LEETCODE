class Solution {
private:
    bool diff(vector<int>&A)
    {
        int n=A.size();
        if(A[n-2]>0 and A[n-1]<0)return true;
        return false;
    }
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>arr;
        for(auto x:asteroids)
        {
            arr.push_back(x);
            while(arr.size()>=2 and diff(arr))
            {
                int a=arr[arr.size()-2];
                int b=arr.back();
                arr.pop_back();arr.pop_back();
                if(abs(a)==abs(b))continue;
                if(abs(a)>abs(b))arr.push_back(a);
                else arr.push_back(b);
            }
        }
        return arr;
    }
};