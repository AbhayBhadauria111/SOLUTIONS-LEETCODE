class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string div="";
        string check="";
        int n=min(str1.size(),str2.size());
        for(int i=0;i<n;i++)
        {
            check+=str1[i];
            if(divide(str1,check) && divide(str2,check))div=check;
        }
        return div;
        
        
    }
private:
    bool divide(string bada,string chota)
    {
        int j=0;
        for(int i=0;i<bada.size();i++)
        {
            if(bada[i]!=chota[j]){
                return 0;}
            else{
                j=(j+1)%chota.size();
            }   
        }
        if(j==0)
            return 1;
        return 0;
    }
};