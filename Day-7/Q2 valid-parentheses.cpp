//https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0 ; i < s.size();++i)
        {   if( s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size() == 0)
                    return false;
                   char ele = st.top();
                    st.pop();
                    if( s[i] == ')' && (ele !='('))
                        return false;
                    else if( s[i] == '}' && (ele !='{'))
                        return false;
                    else if( s[i] == ']' && (ele !='['))
                        return false;
             }            
        } 
        if(st.size()!=0)return false;
        return true;
    }
};