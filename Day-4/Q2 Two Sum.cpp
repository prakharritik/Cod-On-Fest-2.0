//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            if(s.find(target-nums[i])==s.end()){
                s[nums[i]]=i;
            }
            else{
                auto x=s.find(target-nums[i]);
                return {x->second,i};
            }
        }
        
          return res  ;
    }
};