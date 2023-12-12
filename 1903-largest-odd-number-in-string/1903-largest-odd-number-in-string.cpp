class Solution {
public:
    string largestOddNumber(string num) {
        int end=num.size()-1;
        while(end>=0 and (((int)num[end]-'0'))%2==0)end--;
        if(end<0)return "";
        else return num.substr(0,end+1);
    }
};