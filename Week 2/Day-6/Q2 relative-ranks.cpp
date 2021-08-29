//https://leetcode.com/problems/relative-ranks/
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue <pair<int, int> > pq;
        for(int i=0;i<score.size();i++)pq.push({score[i],i});
        vector<string> s(score.size());
        int i=1;
        while(!pq.empty()){
            if(i==1)
                s[pq.top().second]="Gold Medal";
            else if(i==2)
                s[pq.top().second]="Silver Medal";
            else if(i==3)
                s[pq.top().second]="Bronze Medal";
            else 
                s[pq.top().second]=to_string(i); 
            i++;
            pq.pop();
        }
        return s;
    }
};