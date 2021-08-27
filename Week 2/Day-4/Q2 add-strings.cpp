//https://leetcode.com/problems/add-strings
class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1, n2=num2.size()-1;
        string s = (n2>n1)? num2:num1;
        int n= s.size()-1;
        int c=0;
        while(n1>=0 || n2>=0){
            c+=(n1>=0?num1[n1--]-48:0)+(n2>=0?num2[n2--]-48:0);
            s[n--]=48+c%10;
            c/=10;
        }
        if(c>0) s.insert(s.begin(), 48+c);
        return s;
    }
};