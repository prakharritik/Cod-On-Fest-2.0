//https://leetcode.com/problems/maximum-subarray/   (Kadane Algorithm)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0],maxEnding=nums[0];
        for(int i=1;i<nums.size();i++){
            maxEnding=max(nums[i],nums[i]+maxEnding);
            res=max(res,maxEnding);
        }
        return res;
    }
};