Problem Link:- https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/#
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    bool dp[n+1][sum+1];
	    for(int i=0;i<=n;i++){
	        dp[i][0]=true;
	    }
	    for(int i=1;i<=sum;i++){
	        dp[0][i]=false;
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            dp[i][j]=dp[i-1][j];
	            if(arr[i-1]<=j){
	                dp[i][j]=dp[i][j]||dp[i-1][j-arr[i-1]];
	            }
	        }
	    }
	    int mn=INT_MAX;
	    for(int i=0;i<=sum/2;i++)
	    {
	        if(dp[n][i]==true)
	        {
	            mn=min(mn,sum-2*i);
	        }
	    }
	    return mn;
	} 
};
