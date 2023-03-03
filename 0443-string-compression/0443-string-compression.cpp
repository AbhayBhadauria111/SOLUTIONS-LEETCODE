class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int count,j,i=0;
        while(i<n-1)
        {
            if(chars[i+1]==chars[i])
            {
            j=i+1;
                while(j<n and chars[i]==chars[j]){chars[j]=' ',j++;}
            string temp=to_string(j-i);
                if(temp.size()>0)
                    chars[i+1]=temp[0];
                if(temp.size()>1)
                    chars[i+2]=temp[1];
                if(temp.size()>2)
                    chars[i+3]=temp[2];
                if(temp.size()>3)
                    chars[i+4]=temp[3];
            i=j;
            continue;
            }
            i++;
        }
        
        i=0;
        while(i<chars.size())
        {
            if(chars[i]==' ')
            {
                chars.erase(chars.begin()+i);
            }
            else
                i++;
        }
        return chars.size();
    }
};