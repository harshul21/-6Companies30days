//Problem Link:- https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> ans;
        int i=0;
        int j=0;
        long long sum=0;
        while(j<n){
            sum+=arr[j];
            if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            if(sum>s){
                while(sum>s){
                    sum-=arr[i];
                    i++;
                }
                if(sum==s){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }
            }
            j++;
        }
        if(ans.size()==0){
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
  
};
