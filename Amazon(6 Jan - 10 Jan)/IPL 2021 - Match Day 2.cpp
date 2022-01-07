//Problem Link:- https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/#
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        // your code here
        //Time Complexity:-O(NK)
        vector<int> ans;
        if(k>n){
            ans.push_back(k);
            return ans;
        }
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<arr.size();i++)
        {
            if(pq.size()!=0 and pq.top().second<=(i-k)){
                pq.pop();
            }
            pq.push({arr[i],i});
            if(i>=k-1){
                ans.push_back(pq.top().first);
            }
        }
        return ans;
        
        //Below Approach is accepted as it is more optimised O(N)
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
