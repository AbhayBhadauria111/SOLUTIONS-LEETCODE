class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0;
        for(int i=1;i<colors.size()-1;i++)
        {
            if(colors[i]=='A' and colors[i-1]=='A' and colors[i+1]=='A')a++;
            if(colors[i]=='B' and colors[i-1]=='B' and colors[i+1]=='B')b++;
        }
        if(b>=a)return false;
        return true;
    }
};