class Solution {
public:
    int countOdds(int low, int high) {
        int a=high%2+low%2;
        if(a!=0)return (high-low)/2+1;
        return (high-low)/2;
        
        
    }
};