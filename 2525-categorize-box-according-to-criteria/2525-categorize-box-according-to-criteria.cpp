class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=false,heavy=false;
        if(length>=10000 or width>=10000 or height>=10000)bulky=true;
        long long vol=(long long)length*width*height;
        if(vol>=1000000000)bulky=true;
        if(mass>=100)heavy=true;
        if(bulky and heavy)return "Both";
        if(!(bulky or heavy))return "Neither";
        if(bulky and !heavy)return "Bulky";
        if(heavy and !bulky)return "Heavy";
        return "";
    }
};