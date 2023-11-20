class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int papercost=0,metalcost=0,glasscost=0;
        int traveltemp=0;
        int count=0;
        for(auto x:garbage[0])
        {
            if(x=='G')glasscost++;
            else if(x=='P')papercost++;
            else if(x=='M')metalcost++;
        }
//         calculating papercost
        for(int i=1;i<garbage.size();i++)
        {
            traveltemp+=travel[i-1];
            count=0;
            for(auto x:garbage[i])
            {
                if(x=='P')count++;
            }
            if(count>0)
            {
                papercost+=count+traveltemp;
                traveltemp=0;
            }
        }
        traveltemp=0;
        //         calculating metalcost
        for(int i=1;i<garbage.size();i++)
        {
            traveltemp+=travel[i-1];
            count=0;
            for(auto x:garbage[i])
            {
                if(x=='M')count++;
            }
            if(count>0)
            {
                metalcost+=count+traveltemp;
                traveltemp=0;
            }
        }
        traveltemp=0;
        //         calculating glasscost
        for(int i=1;i<garbage.size();i++)
        {
            traveltemp+=travel[i-1];
            count=0;
            for(auto x:garbage[i])
            {
                if(x=='G')count++;
            }
            if(count>0)
            {
                glasscost+=count+traveltemp;
                traveltemp=0;
            }
        }
        // cout<<glasscost<<" "<<metalcost<<" "<<papercost<<endl;
        return glasscost+metalcost+papercost;
    }
};