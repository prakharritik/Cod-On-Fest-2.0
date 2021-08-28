//https://practice.geeksforgeeks.org/problems/twice-counter4236/1#
class Solution
{
    public:
        int countWords(string list[], int n)
        {
           int c=0;
           unordered_map<string,int> m;
           for(int i = 0; i < n; i++){
               m[list[i]]++;
           }
           for(auto x : m){
               if(x.second==2)c++;
           }
           return c;
        }

};