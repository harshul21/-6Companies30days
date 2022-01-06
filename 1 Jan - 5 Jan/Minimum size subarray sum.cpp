//Problem Link - https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int res=n+1;
        int i=0;
        for(int j=0;j<n;j++)
        {
            target-=nums[j];
            if(target<=0){
                while(target<=0){
                    res=min(res,j-i+1);
                    target+=nums[i++];
                }
            }
        }
        return res%(n+1);
    }
};
