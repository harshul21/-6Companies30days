//Problem Link:-https://leetcode.com/problems/sliding-window-maximum/
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //using heap
        /*priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            while(!pq.empty() and pq.top().second<=(i-k))
            {
                pq.pop();
            }
            pq.push(make_pair(nums[i],i));
            if(i>=k-1)
            {
                ans.push_back(pq.top().first);
            }
        }
        return ans;*/
        
        //using deque
        deque<pair<int,int>> d;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            while(!d.empty() and d.front().second<=(i-k))
            {
                d.pop_front();                    
            }
            while(!d.empty() and d.back().first<=nums[i])
            {
                d.pop_back();
            }
            d.push_back(make_pair(nums[i],i));
            if(i>=k-1)
            {
                ans.push_back(d.front().first);
            }
        }
        return ans;
    }
};
