//Problem Link-https://practice.geeksforgeeks.org/problems/maximum-profit4657/1
class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        int dp[K+1][N];
        for(int i=0;i<N;i++){
        	dp[0][i]=0;
        }
        for(int i=0;i<=K;i++){
        	dp[i][0]=0;
        }
        for(int t=1;t<=K;t++){
        	for(int d=1;d<N;d++){
        		int mx=dp[t][d-1];

        		for(int pd=0;pd<d;pd++){
        			int ptilltm1=dp[t-1][pd];
        			int ptth=A[d]-A[pd];

        			if(ptilltm1+ptth>mx){
        				mx=ptth+ptilltm1;
        			}
        		}
        		dp[t][d]=mx;
        	}
        }
        return dp[K][N-1];
    }
};

//More Optimised Approach
class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        int dp[K+1][N];
        for(int i=0;i<N;i++){
        	dp[0][i]=0;
        }
        for(int i=0;i<=K;i++){
        	dp[i][0]=0;
        }
        for(int t=1;t<=K;t++){
        	int mx=INT_MIN;
        	for(int d=1;d<N;d++){
        		if(dp[t-1][d-1]-A[d-1]>mx){
        			mx=dp[t-1][d-1]-A[d-1];
        		}

        		if(mx+A[d]>dp[t][d-1]){
        			dp[t][d]=mx+A[d];
        		}
        		else{
        			dp[t][d]=dp[t][d-1];
        		}
        	}
        }
        return dp[K][N-1];
    }
};
