Problem Link:-https://leetcode.com/problems/longest-mountain-in-array/
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        Important concept and good ques
        if(arr.size()<3)
        {
            return 0;
        }
        int res=0, curr=0, len=arr.size();
        bool isMountain = false, isDescending=false;
        for(int i=1;i<len;i++)
        {
            if(arr[i]>arr[i-1])
            {
                if(isDescending or !isMountain)
                {
                    isDescending = false;
                    isMountain = true;
                    curr=1;
                }
                curr++;
            }
            else if(isMountain)
            {
                if(arr[i]<arr[i-1])
                {
                    isDescending = true;
                    res=max(res,++curr);
                }
                else if(arr[i]==arr[i-1])
                {
                    isMountain = false;
                }
            }
        }
        return res;
       
    }
};
