//https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int> > pq;
        int i=0;
        while(k--){
            pq.push(nums[i]);i++;
        }
        while(i<nums.size()){
            if(nums[i]>pq.top()){
                pq.pop(); pq.push(nums[i]);
            }
            i++;
        }
        return pq.top();
    }
};