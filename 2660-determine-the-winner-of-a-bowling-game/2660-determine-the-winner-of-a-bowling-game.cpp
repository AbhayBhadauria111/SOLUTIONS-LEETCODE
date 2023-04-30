class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1=player1[0],score2=player2[0];
        for(int i=1;i<player1.size();i++)
        {
            if(i>=2)
            {
                if(player1[i-1]==10 or player1[i-2]==10)score1+=2*player1[i];
                else score1+=player1[i];
                if(player2[i-1]==10 or player2[i-2]==10)score2+=2*player2[i];
                else score2+=player2[i];
            }
            else
            {
                if(player1[i-1]==10)score1+=2*player1[i];
                else score1+=player1[i];
                if(player2[i-1]==10)score2+=2*player2[i];
                else score2+=player2[i];
            }
        }
        // cout<<score1<<" "<<score2;
        if(score1==score2)return 0;
        if(score1>score2)return 1;
        return 2;
    }
};