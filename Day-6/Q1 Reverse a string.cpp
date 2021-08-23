//https://leetcode.com/explore/learn/card/recursion-i/250/principle-of-recursion/1440/
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()==0)return;
        char t=s.front();
        s.erase(s.begin());
        reverseString(s);
        s.push_back(t);
    }
};