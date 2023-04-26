//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        int places=0;
        
        if(seats.size()==1)
        {
            if(seats[0]==0)places=1;
            if(places>=n)return true;
            return false;
        }
        
        for(int i=0;i<seats.size();i++)
        {
            if(i==0 and seats[i+1]==0 and seats[i]==0)
            {
                places++;
                seats[i]=1;
            }
            else if(i==seats.size()-1 and seats[i-1]==0 and seats[i]==0)
            {
                places++;
                seats[i]=1;
            }
            else
            {
                if(seats[i-1]==0 and seats[i+1]==0 and seats[i]==0)
                {
                    seats[i]=1;
                    places++;
                }
            }
        }
        if(places>=n)return true;
        return false;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends