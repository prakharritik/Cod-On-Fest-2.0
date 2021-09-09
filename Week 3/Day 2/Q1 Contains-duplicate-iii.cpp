/**
https://leetcode.com/problems/contains-duplicate-iii/
 */
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
        const int N = nums.size();

        set<int> s;

        for (int i=0; i<N; i++) {

            auto succ=s.lower_bound(nums[i]);
            if (succ!=s.end() and (long)*succ - nums[i] <= t) 
                return true;

            auto pred=succ;
            if (pred!=s.begin() and (long)nums[i]-*(--pred) <= t) {
                return true;
            }

            s.insert(nums[i]);
            if (s.size()>k)
                s.erase(nums[i-k]);
        }

        return false;
    }
};