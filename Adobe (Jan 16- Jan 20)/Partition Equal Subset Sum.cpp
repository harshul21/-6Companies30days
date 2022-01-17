//Problem Link:-https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#
class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            return 0;
        }
        sum=sum/2;
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        for(int j=1;j<=sum;j++)
        {
            dp[0][j]=false;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};
