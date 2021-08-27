//https://leetcode.com/problems/roman-to-integer
class Solution {
public:
    int getvalue(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            if(getvalue(s[i])>=getvalue(s[i+1]))res+=getvalue(s[i]);
            else res-=getvalue(s[i]);
        }
        return res;
    }
};