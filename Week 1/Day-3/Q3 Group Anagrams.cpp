//https://leetcode.com/problems/group-anagrams/

class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> sol;
        unordered_map<string, int> mp;
        for(int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(mp.count(temp)==0) {
                mp[temp]=sol.size();
                sol.push_back({strs[i]});
            }
            else {
                int ind = mp[temp];
                sol[ind].push_back(strs[i]);
            }
        }
        return sol;
    }
};