class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        while(i<bits.size())
        {
            if(i==bits.size()-1)return true;
            else
            {
                if(bits[i]==0)i++;
                else if(bits[i]==1)i+=2;
            }
        }
        return false;
    }
};